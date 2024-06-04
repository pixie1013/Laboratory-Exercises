#include <iostream>
using namespace std;

class Product {
    private:
        string name;
        string brand;
        float price;
        int quantity;
        string description;
        string size;
        string color;
        string category;
        string model;
        string warranty;
        string technical_specifications;
        string material;

    public:
        // Constructor
        Product() {}

        // Set functions
        void setName(string n) {
            name = n;
        }

        void setBrand(string b) {
            brand = b;
        }

        void setPrice(float p) {
            price = p;
        }

        void setQuantity(int q) {
            quantity = q;
        }

        void setDescription(string d) {
            description = d;
        }

        void setSize(string s) {
            size = s;
        }

        void setColor(string c) {
            color = c;
        }

        void setCategory(string cat) {
            category = cat;
        }

        void setModel(string m) {
            model = m;
        }

        void setWarranty(string w) {
            warranty = w;
        }

        void setTechnicalSpecifications(string ts) {
            technical_specifications = ts;
        }

        void setMaterial(string mat) {
            material = mat;
        }

        // Get functions
        string getName() {
            return name;
        }

        string getBrand() {
            return brand;
        }

        float getPrice() {
            return price;
        }

        int getQuantity() {
            return quantity;
        }

        string getDescription() {
            return description;
        }

        string getSize() {
            return size;
        }

        string getColor() {
            return color;
        }

        string getCategory() {
            return category;
        }

        string getModel() {
            return model;
        }

        string getWarranty() {
            return warranty;
        }

        string getTechnicalSpecifications() {
            return technical_specifications;
        }

        string getMaterial() {
            return material;
        }
};

class Clothing : public Product {
    public:
        // Constructor
        Clothing() : Product() {}

};

class Electronics : public Product {
    public:
        // Constructor
        Electronics() : Product() {}
};