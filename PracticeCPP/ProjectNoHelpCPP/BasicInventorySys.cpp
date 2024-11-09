
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


class Product{
    private:
        int id;
        string name;
        double price;
        int qty;

    public:
    //contrust for product objects
    Product(int id_i, string name_i, double price_i, int qty_i) : id(id_i), name(name_i), price(price_i), qty(qty_i) {}

    //get methods for values in product object
    int get_id() const{
        return id;
    }
    string get_name() const {
        return name;
    }
    double get_price() const {
        return price;
    }
    int get_qty() const {
        return qty;
    }

    //set methods setting values 
    void set_id(int id_i) { id = id_i;}

    void set_name(string name_i) {name = name_i;}

    void set_price(double price_i) {price = price_i;}

    void set_qty(int qty_i) {qty = qty_i;}

};

class ManagementSys {
    private: 
        vector<Product> products;

    public: 
        void addProduct(const Product& product){
            products.push_back(product);
        }
        void viewInventory() const {
            for(const auto& product : products){
                cout<<"--------------------------------------"<<endl;
                cout<<"ID: "<< product.get_id()<<endl;
                cout<<"Product Name: "<< product.get_name()<<endl;
                cout<<"Price $"<<product.get_price()<<endl;
                cout<< "Quantity: "<<product.get_qty()<<endl;
                cout<<"--------------------------------------"<<endl;
            }
        }
        void removeProduct(int id){
            auto it = remove_if(products.begin(), products.end(),
            [id](const Product& product){return product.get_id() == id; });

            if (it != products.end()){
                products.erase(it, products.end());
                cout<< "Product with ID: "<< id << " has been removed. \n";
            }else {
                cout<< "Product with ID: "<< id << "not found. \n";
            }
        }

};


int main(){
ManagementSys inv;    

Product prod1(00001, "3090 GPU",799.99,5);
Product prod2(00002, "Intel i7",399.99,2);
Product prod3(00003, "Non-RGB Fans",19.99,10);

inv.addProduct(prod1);
inv.addProduct(prod2);
inv.addProduct(prod3);

//display inventory
inv.viewInventory();

//testing remove 
inv.removeProduct(00002);



    return 0;

}

