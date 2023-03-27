<?php

class ContactModel
{

    var $Connection;

    public function __construct()
    {
        require_once('db/ConnectClass.php');
        $connectClass = new ConnectClass();
        $connectClass->openConnect();
        $this->Connection = $connectClass->getConn();
    }

    public function listContacts()
    {
        $sql = 'SELECT * from contacts';
        return $this->Connection->query($sql);
    }

    public function consultContact($idContact)
    {
        $sql = "SELECT * from contacts
             WHERE
               idContact= $idContact
        ";
        return $this->Connection->query($sql);
    }

    public function insertContact($contact)
    {
        $sql = "
          INSERT INTO contacts 
            (name,message,status)
            VALUES(
             '{$contact['name']}',
             '{$contact['message']}',
             '{$contact['status']}',
             
             )
        ";

        $this->Connection->query($sql);
        return $this->Connection->insert_id;
       
    }
}