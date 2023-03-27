<?php

class ClientController{

    public function register(){
        require_once('views/templates/header.php');
        require_once('views/client/register.php');
        require_once('views/templates/footer.php');
    }
    public function registerView(){

        if(isset($_POST['accept'])){
            $accept=true;
            $acceptView='Sim, aceito';
        }else{
            $accept=false;
            $acceptView='Não aceito';

        }

        $arrayClient=array(
            'name'=>$_POST['name'],
            'email'=>$_POST['email'],
            'gender'=>$_POST['gender'],
            'phone'=>$_POST ['phone'],
            'accept'=> $accept,
            'acceptView'=>$acceptView,
        );
                 
        require_once('views/templates/header.php');
        require_once('views/client/registerView.php');
        require_once('views/templates/footer.php');
    }

    public function listClients(){
        require_once('models/ClientModels.php');
        $clientModel = new ClientModel();
        $result= $clientModel -> listClients();

        $arrayClients=array();
        while($line = $result -> fetch_assoc()){
            array_push($arrayClients, $line);
        }

        require_once('views/templates/header.php');
        require_once('views/client/listClients.php');
        require_once('views/templates/footer.php');


    }
}
