<?php
$servername = "db"; //localhos:3306
$username = "root";
$password = "1q2w3e4r5t";
$dbname = "pw_exemple";

$conn = new mysqli($servername, $username, $password, $dbname);
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}

$sql = "SELECT * FROM produt";
$result = $conn->query($sql);

$arrayProdut =  array();
while($line = $result -> fetch_assoc()){
    array_push($arrayProdut, $line);
}

foreach ($arrayProdut as $produt) {
    echo $produt['idProdut'].' - ';
    echo $produt['nameprodut'];
    echo '<br>';
}

$conn->close();

?>