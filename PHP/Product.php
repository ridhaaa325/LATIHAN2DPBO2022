<?php 

    // class for Product
    class Product
    {
        // public attributes
        public $idProduct;
        public $price;

        // constructor
        public function __construct($idProduct = "", $price = 0)
        {
            $this->idProduct = $idProduct;
            $this->price = $price;            
        }

        // methods for id product attribute
        public function setIDProduct($idProduct)
        {
            $this->idProduct = $idProduct;
        }   
        public function getIDProduct()
        {
            return $this->idProduct;
        }

        // methods for price attribute
        public function setPrice($price)
        {
            $this->price = $price;
        }   
        public function getPrice()
        {
            return $this->price;
        }

        // destructor
        public function __destruct()
        {
            
        }
    }
?>