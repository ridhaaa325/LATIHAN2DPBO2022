<?php 

    // class for Memory
    class Memory extends Hardware
    {
        // public attributes
        public $frequency;
        public $memorysize;
        public $cuda;

        // constructor
        public function __construct($frequency = "", $memorysize = "", $cuda = "")
        {
            $this->frequency = $frequency;
            $this->memorysize = $memorysize;
            $this->cuda = $cuda;            
        }

        // methods for frequency attribute
        public function setFrequency($frequency)
        {
            $this->frequency = $frequency;
        }   
        public function getFrequency()
        {
            return $this->frequency;
        }

        // methods for memory size attribute
        public function setMemorySize($memorysize)
        {
            $this->memorysize = $memorysize;
        }   
        public function getMemorySize()
        {
            return $this->memorysize;
        }
        
        // methods for supports cuda attribute
        public function setCuda($cuda)
        {
            $this->cuda = $cuda;
        }   
        public function getCuda()
        {
            return $this->cuda;
        }

        // destructor
        public function __destruct()
        {
            
        }
    }
?>