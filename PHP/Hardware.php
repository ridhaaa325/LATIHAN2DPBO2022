<?php 

    // class for Hardware
    class Hardware extends Product
    {
        // public attributes
        public $brand;
        public $model;

        // constructor
        public function __construct($brand = "", $model = "")
        {
            $this->brand = $brand;
            $this->model = $model;            
        }   

        // methods for brand attribute
        public function setBrand($brand)
        {
            $this->brand = $brand;
        }   
        public function getBrand()
        {
            return $this->brand;
        }

        // methods for model attribute
        public function setModel($model)
        {
            $this->model = $model;
        }   
        public function getModel()
        {
            return $this->model;
        }

        // destructor
        public function __destruct()
        {
            
        }
    }
?>