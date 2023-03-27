<?php

namespace App\Controllers\Admin;

use App\Controllers\BaseController;

class Admin extends BaseController{

    public function index(){
        //testar login
        $session= \Config\Services::session();

        if($session -> has('user')){
            echo view('admin/templates/header');
            echo view('admin/templates/home');
            echo view('admin/templates/footer');

        }else{
            return redirect()->to(base_url('admin/login'));
        }

    }

    public function login(){
        echo view('admin/main/login');
    }
}
 
