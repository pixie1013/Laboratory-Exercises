// This program identifies prompts the user to input information for a clothing and electronic product
// Written by Trixie Nicole Organiza

#include <iostream>
#include <limits>
#include "Product.h"
using namespace std;

int main(){
    string category;
    string name;
    string brand;
    float price;
    int quantity;
    string description;
    string size;
    string color;
    string model;
    string warranty;
    string techSpecs;
    string material;
    Clothing clothing;
    Electronics electronics;
	
    cout << "----------------------------------------" << endl;
    // INPUT CLOTHING INFORMATION
    cout << "Input the clothing details:" << endl;
    cout << "Product Name: ";
    getline(cin, name);
    clothing.setName(name);
    
    cout << "Brand: ";
    getline(cin, brand);
    clothing.setBrand(brand);
    
    while (true) {
    cout << "Price: ";
    	if (!(cin >> price)) {
        	cout << "Invalid input. Please enter a valid floating-point number." << endl;
        	cin.clear();
        	cin.ignore(numeric_limits<streamsize>::max(), '\n');
    	} else {
        	break; // Exit the loop if the input is valid
    	}
	}
    clothing.setPrice(price);
    
    do {
        cout << "Quantity: ";
        if (!(cin >> quantity) || quantity < 0 || cin.peek() != '\n') {
            cout << "Invalid input. Please enter a valid non-negative integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            clothing.setQuantity(quantity); // Assign quantity to clothing object
            break;
        }
    } while (true);
    cin.ignore();
    
    cout << "Description: ";
    getline(cin, description);
    clothing.setDescription(description);
    
    cout << "Size: ";
    cin >> size;
    cin.ignore();
    clothing.setSize(size);

    cout << "Color: "; 
    getline(cin, color);
    clothing.setColor(color);
    
    cout << "Category: ";
    getline(cin, category);
    clothing.setCategory(category);
    
    cout << "Material: ";
    getline(cin, material);
    clothing.setMaterial(material); 
    
    cout << "----------------------------------------" << endl;
	cout << "Clothing Details:" << endl;
	cout << "| Name:       | " << clothing.getName() << endl;
	cout << "| Brand:      | " << clothing.getBrand() << endl;
	cout << "| Price:      | $" << clothing.getPrice() << endl;
	cout << "| Quantity:   | " << clothing.getQuantity() << endl;
	cout << "| Description:| " << clothing.getDescription() << endl;
	cout << "| Size:       | " << clothing.getSize() << endl;
	cout << "| Color:      | " << clothing.getColor() << endl;
	cout << "| Category:   | " << clothing.getCategory() << endl;
	cout << "| Material:   | " << clothing.getMaterial() << endl;
	cout << "----------------------------------------" << endl;


    cout << "\n----------------------------------------" << endl;    
    cout << "\nEnter Electronics Details:" << endl;
    cout << "Name: ";
    cin.ignore(); 
    getline(cin, name);
    electronics.setName(name);

    cout << "Brand: ";
    getline(cin, brand);
    electronics.setBrand(brand);

    while (true) {
        cout << "Price: ";
        if (!(cin >> price)) {
            cout << "Invalid input. Please enter a valid floating-point number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break; // Exit the loop if the input is valid
        }
    }
    electronics.setPrice(price);
    cin.ignore();

    do {
        cout << "Quantity: ";
        if (!(cin >> quantity) || quantity < 0 || cin.peek() != '\n') {
            cout << "Invalid input. Please enter a valid non-negative integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            electronics.setQuantity(quantity); // Assign quantity to clothing object
            break;
        }
    } while (true);
    cin.ignore();
    
	// INPUT ELECTRONICS INFORMATION
    cout << "Description: ";
    getline(cin, description);
    electronics.setDescription(description);

    cout << "Size: ";
    cin >> size;
    cin.ignore(); 
    electronics.setSize(size);

    cout << "Color: ";
    getline(cin, color);
    electronics.setColor(color);

    cout << "Category: ";
    getline(cin, category);
    electronics.setCategory(category);

    cout << "Model: ";
    getline(cin, model);
    electronics.setModel(model);
    
    cout << "Warranty: ";
    getline(cin, warranty1);
    electronics.setWarranty(warranty);

    cout << "Technical Specifications: ";
    cin.ignore(); 
    getline(cin, techSpecs);
    electronics.setTechnicalSpecifications(techSpecs);

    cout << "----------------------------------------" << endl;
	cout << "Electronics Details:" << endl;
	cout << "| Name:                    | " << electronics.getName() << endl;
	cout << "| Brand:                   | " << electronics.getBrand() << endl;
	cout << "| Price:                   | " << electronics.getPrice() << endl;
	cout << "| Quantity:                | " << electronics.getQuantity() << endl;
	cout << "| Description:             | " << electronics.getDescription() << endl;
	cout << "| Size:                    | " << electronics.getSize() << endl;
	cout << "| Color:                   | " << electronics.getColor() << endl;
	cout << "| Category:                | " << electronics.getCategory() << endl;
	cout << "| Model:                   | " << electronics.getModel() << endl;
	cout << "| Warranty:                | " << electronics.getWarranty() << " years" << endl;
	cout << "| Technical Specifications:| " << electronics.getTechnicalSpecifications() << endl;
	cout << "----------------------------------------" << endl;

    return 0;
}
