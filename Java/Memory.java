public class Memory extends Hardware{

    private int frequency = 0;
    private int memorySize = 0;
    private String supportsCuda = "";

    public Memory(int frequency, int memorySize, String supportsCuda) {
        this.frequency = frequency;
        this.memorySize = memorySize;
        this.supportsCuda = supportsCuda;
    }

    public Memory() {

    }

    public void setFrequency(int frequency) {
        this.frequency = frequency;
    }
    public int getFrequency() {
        return this.frequency;
    }

    public void setMemorySize(int memorySize) {
        this.memorySize = memorySize;
    }
    public int getMemorySize() {
        return this.memorySize;
    }

    public void setSupportsCuda(String supportsCuda) {
        this.supportsCuda = supportsCuda;
    }
    public String getSupportsCuda() {
        return this.supportsCuda;
    }

}