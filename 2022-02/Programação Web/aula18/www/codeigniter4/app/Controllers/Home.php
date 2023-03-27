<?php

namespace App\Controllers;

use App\Controllers\BaseControllers;

class Home extends BaseController
{
    public function index()
    {
        return view('welcome_message');
    }
}
