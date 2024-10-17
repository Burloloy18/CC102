#include <iostream>
using namespace std;

int main() {
     
    double sugarPriceUsd = 1.7;  
    double ricePricePound = 1.5;  
    double sardinesPricePound = 1.0;  
    double coffeePriceUsd = 3.5;  
    double milkPriceUsd = 2.7;  

    
    int sugarQty, riceQty, sardineQty, coffeeQty, milkQty;
    cout << "Enter quantity of sugar: ";
    cin >> sugarQty;
    cout << "Enter quantity of rice: ";
    cin >> riceQty;
    cout << "Enter quantity of sardines: ";
    cin >> sardineQty;
    cout << "Enter quantity of coffee: ";
    cin >> coffeeQty;
    cout << "Enter quantity of milk: ";
    cin >> milkQty;

    
    double usdToPhp = 56.0;  
    double poundToPhp = 70.0;  

    
    double sugarCostPhp = sugarQty * sugarPriceUsd * usdToPhp;
    double riceCostPhp = riceQty * ricePricePound * poundToPhp;
    double sardinesCostPhp = sardineQty * sardinesPricePound * poundToPhp;
    double coffeeCostPhp = coffeeQty * coffeePriceUsd * usdToPhp;
    double milkCostPhp = milkQty * milkPriceUsd * usdToPhp;

    
    double totalCostPhp = sugarCostPhp + riceCostPhp + sardinesCostPhp + coffeeCostPhp + milkCostPhp;

    
    cout << "Total cost in PHP: " << totalCostPhp << endl;

    return 0;
}
