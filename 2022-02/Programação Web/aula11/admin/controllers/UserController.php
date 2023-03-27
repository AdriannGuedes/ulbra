<?php

class UserController
{

    public function validateLogin()
    {
        $userName = $_POST['userName'];
        $password = $_POST['password'];
        require_once('models/UserModel.php');
        $UserModel = new UserModel();
        //estanciar

        $result = $UserModel->consultUser($userName);

        if ($line = $result->fetch_assoc()) {
            //tem resultado
            if ($password == $line['password']) {
                //dar acesso
                $_SESSION['user'] = $line;
                header('Location: index.php');
            } else {
                echo 'senha inválida';
            }
        } else {
            echo 'Usuário não existente';
        }
    }

    public function usersList(){

       
        require_once('models/UserModel.php');
        $usersModel = new UserModel();
        $result = $usersModel->usersList();

        $arrayUser = array();
        while ($line = $result->fetch_assoc()) {
            array_push($arrayUser, $line);
        }

        require_once('views/templates/header.php');
        require_once('views/users/userList.php');
        require_once('views/templates/footer.php');
    }
}
