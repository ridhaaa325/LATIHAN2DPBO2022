<?php

	// call the class files
	include "Product.php";
	include "Hardware.php";
	include "Memory.php";

	// input the data to data1 with set function
	$data1 = new Memory();
	$data1->setIDProduct("BR1");
	$data1->setPrice("5.000.000");
	$data1->setBrand("ROG");
	$data1->setModel("RTX");
	$data1->setFrequency("2000");
	$data1->setMemorySize("8192 MHz");
	$data1->setCuda("Yes");

	// input the data to data2 with set function
	$data2 = new Memory();
	$data2->setIDProduct("BR2");
	$data2->setPrice("10.000.000");
	$data2->setBrand("TUF");
	$data2->setModel("RTX");
	$data2->setFrequency("4000");
	$data2->setMemorySize("16384 MHz");
	$data2->setCuda("No");
	
	// show the output to screen
	echo "===================="."<br/>";
	echo "ID Product	: " .$data1->getIDProduct()."<br/>";
	echo "Product Price : " .$data1->getPrice()."<br/>";
	echo "Product Brand : " .$data1->getBrand()."<br/>";
	echo "Product Model : " .$data1->getModel()."<br/>";
	echo "Frequency     : " .$data1->getFrequency()."<br/>";
	echo "Memory Size   : " .$data1->getMemorySize()."<br/>";
	echo "Supports Cuda : " .$data1->getCuda()."<br/>";
	echo "===================="."<br/>";
		
	echo "<br/>";
	echo "===================="."<br/>";
	echo "ID Product	: " .$data2->getIDProduct()."<br/>";
	echo "Product Price : " .$data2->getPrice()."<br/>";
	echo "Product Brand : " .$data2->getBrand()."<br/>";
	echo "Product Model : " .$data2->getModel()."<br/>";
	echo "Frequency     : " .$data2->getFrequency()."<br/>";
	echo "Memory Size   : " .$data2->getMemorySize()."<br/>";
	echo "Supports Cuda : " .$data2->getCuda()."<br/>";
	echo "===================="."<br/>";

?>