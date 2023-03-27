<?php

 class ProdutsController{

    public function produtsRegister(){
        require_once('views/templates/header.php');
        require_once('views/produt/produtsRegister.php');
        require_once('views/templates/footer.php');

    }

    public function produtsView(){

        $arrayProdut=array(
            'nameprodut'=>$_POST['nameprodut'],
            'discription'=>$_POST['discription'],
            'category'=>$_POST['category'],
            'value'=>$_POST['value'],

        );

        require_once('views/templates/header.php');
        require_once('views/produt/produtsView.php');
        require_once('views/templates/footer.php');
    }

    public function listProduts(){
        require_once('models/ProdutModel.php');
        $produtModel= new ProdutModel();
        $result= $produtModel -> listProduts();

        $arrayProdut=array();
        while($line = $result -> fetch_assoc()){
            array_push($arrayProdut, $line);
        }

        require_once('views/templates/header.php');
        require_once('views/produt/listproduts.php');
        require_once('views/templates/footer.php');




        
    }

 }