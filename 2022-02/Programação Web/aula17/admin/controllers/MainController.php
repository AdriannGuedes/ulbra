<?php
//vai pegar a classe da index e fazer os require_once

class MainController{


    public function index(){

        if(isset($_SESSION['user'])){
            require_once('views/templates/header.php');
            require_once('views/templates/home.php');
            require_once('views/templates/footer.php');

        }else{
            header('Location:?controller=main&action=login');
        }

       
    }

    public function login(){
        require_once('views/users/login.php');
    }

    public function logout(){
        session_destroy();
        header('Location:?controller=main&action=login');
    }

    public function home(){
        require_once('views/templates/header.php');
        require_once('views/templates/home.php');
        require_once('views/templates/footer.php');


    }
}