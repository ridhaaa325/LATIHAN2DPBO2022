public class Product {

    private int price = 0;
    private String idProduct = "";
    // constructor
    public Product(int price, String idProduct) {
        this.price = price;
        this.idProduct = idProduct;
    }

    public Product() {

    }

    public void setPrice(int price) {
        this.price = price;        
    }
    public int getPrice() {
        return this.price;        
    }

    public void setIdProduct(String idPString) {
        this.idProduct = idProduct;
    }
    public String getIdProduct() {
        return this.idProduct;
    }
}