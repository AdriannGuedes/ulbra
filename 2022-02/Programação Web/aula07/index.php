<?php

ini_set('display_errors', 1);
ini_set('display_startup_errors', 1);
error_reporting(E_ALL);

if (!isset($_GET['controller'])) {
  require_once('controllers/SiteController.php');
  $SiteController = new SiteController();
  $SiteController->home();
} else {
  switch ($_REQUEST['controller']) {
    case 'site':
      require_once('controllers/SiteController.php');
      $SiteController = new SiteController();
      if (!isset($_GET['action'])) {
        $SiteController->home();
      } else {
        switch ($_REQUEST['action']) {
          case 'home':
            $SiteController->home();
            break;
          case 'sobre':
            $SiteController->sobre();
            break;
          case 'produtoseservicos':
            $SiteController->produtoseservicos();
            break;
          case 'contato':
            $SiteController->contato();
            break;
        }
      }
      break;

    case 'client':
      require_once('controllers/ClientController.php');
      $ClientController = new ClientController();
      if (!isset($_GET['action'])) {
      } else {
        switch ($_REQUEST['action']) {
          case 'register':
            $ClientController->register();

            break;
          case 'registerView':
            $ClientController->registerView();

            break;
          case 'listClients':
            $ClientController->listClients();

            break;
        }
      }
      break;
    case 'produt':
      require_once('controllers/ProdutsController.php');
      $ProdutsController = new ProdutsController();
      if (!isset($_GET['action'])) {
      } else {
        switch ($_REQUEST['action']) {
          case 'produtsRegister':
            $ProdutsController->produtsRegister();
            break;
          case 'produtsView':
            $ProdutsController->produtsView();
            break;
          case 'listProduts':
            $ProdutsController->listProduts();
            
            break;
        }
      }
  }
}
