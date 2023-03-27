<?php

class UserModel{
    
    public function consultUser($userName){
        require_once('db/ConnectClass.php');
        $connectClass = new ConnectClass();
        $connectClass->openConnect();
        $connection = $connectClass->getConn();

        $sql = "
          SELECT * from users
          WHERE
               user= '$userName'
        ";
        return $connection->query($sql);
    }

    public function  usersList(){
        require_once('db/ConnectClass.php');
        $connectClass = new ConnectClass();
        $connectClass->openConnect();
        $connection = $connectClass->getConn();

        $sql = 'SELECT * from users';
        return $connection->query($sql);
    }
}


