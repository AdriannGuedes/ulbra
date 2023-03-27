<?php

class ProdutModel{
    public function listProduts(){
        require_once('db/ConnectClass.php');
        $connectClass= new ConnectClass();
        $connectClass-> openConnect();
        $connection= $connectClass-> getConn();

        $sql='SELECT * from produt';
        return $connection-> query($sql);
        
    }
}