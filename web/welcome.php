<html>
<body>
<?php global $name;echo $name;?>
Welcome <?php echo $_POST["name"]; ?><br>
Your email address is: <?php echo $_POST["email"]; ?>
<?php
$param = $_POST["name"];
echo "<br>".$param."<br>";
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "test_db";
// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 
echo "Connected successfully";
$sql = "SELECT * FROM students where grade = $param";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    // output data of each row
    while($row = $result->fetch_assoc()) {
        echo "name: " . $row["name"].   "<br>";
    }
} else {
    echo "0 results";
}
$conn->close();
?>
</body>
</html>