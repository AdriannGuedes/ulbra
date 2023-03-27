<?php

class ContactController{
   
   
    var $ContactModel;

    public function __construct(){
        require_once('models/ContactModel.php');
        $this->ContactModel = new ContactModel();
    }

    public function listContacts()
    {
        $result = $this->ContactModel->listContacts();
        $arrayContacts = array();
        while ($line = $result->fetch_assoc()) {
            array_push($arrayContacts, $line);
        }
        header('Content-Type: application/json');
        json_encode($arrayContacts);
    }

    public function consultContact($idContact)
    {
        $result = $this->ContactModel->consultContact($idContact);
        if ($arrayContact = $result->fetch_assoc()) {
            header('Content-Type: application/json');
            json_encode($arrayContact);
        } else {
            header('Content-Type: application/json');
            echo ("{'error':'1',
                    'message' : 'Contato não encontrado'}"
            );
        }
    }



    public function insertContact()
    {
        $contact = json_decode(file_get_contents("php://input"));
        $contact = (array) $contact;
        var_dump($contact);
        $idContact = $this->ContactModel->insertContact($contact);
        header('Content-Type: application/json');
        echo ("{'success':'1',
                    'message' : 'Contato inserido'}"
        );
    }
}
