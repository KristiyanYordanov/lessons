<html>
<head><title>Amit4 php</title></head>
<body>

<?php
//errors
echo "<p><b>Errors:</b></p>";
$color = "red";
echo "My car is " . $color . "<br>";
echo "My house is " . $COLOR . "<br>";
echo "My boat is " . $coLOR . "<br>";

//variables
echo "<p><b>variables:</b></p>";
$txt = "Hello world!";
$x2 = 5;
$y2 = 10.5;
$txt = "W3Schools.com";
echo "I love $txt!";

//math operation
echo "<p><b>math operation:</b></p>";
$x = 51;
$y = 4;
echo "the result is = " . ($x + $y);


//function
echo "<p><b>function:</b></p>";
function myTest() {
	// using x inside this function will generate an error
    echo "<p>Variable x inside function is: $x</p>";
	
	//access global variable within function
	 global $y;
	// using y inside this function will work because of global key word
	echo "<p>Variable y inside function is: $y</p>";
} 
myTest();


echo "<p><b>print:</b></p>";
print "<h2>$txt</h2>";


echo "<p><b>Data types:</b></p>";
$x = 5985;
$xF = 10.365;
$xB1 = true;
$yB2 = false;
$cars = array("Volvo","BMW","Toyota");


class Car {
    function Car() {
        $this->model = "VW";
    }
}

// create an object
$herbie = new Car();

// show object properties
echo $herbie->model;

$xN = "Hello world!";
$xN = null;

print "<h3>String </h3>";
print "<h3>Integer </h3>";
print "<h3>Float</h3>";
print "<h3>Boolean</h3>";
print "<h3>Array</h3>";
print "<h3>Object</h3>";
print "<h3>NULL</h3>";
print "<h3>Resource</h3>";

?>


<form action="welcome.php" method="post">
Name: <input type="text" name="name"><br>
E-mail: <input type="text" name="email"><br>
<input type="submit">
</form>


</body>
</html>