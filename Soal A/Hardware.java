import javax.swing.plaf.metal.MetalBorders.PopupMenuBorder;

public class Hardware extends Product{

    private String brand = "";
    private String model = "";

    public Hardware(String brand, String model) {
        this.brand = brand;
        this.model = model;
    }

    public Hardware() {

    }

    public void setBrand(String brand) {
        this.brand = brand;
    }
    public String getBrand() {
        return this.brand;
    }

    public void setModel(String model) {
        this.model = model;
    }
    public String getModel() {
        return this.model;
    }

}