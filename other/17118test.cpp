#include <iostream>
#include <string>
using namespace std;
string add(string a, string b) {
    int carry = 0;
    string result = "";

    while (a.length() > 0 || b.length() > 0 || carry > 0) {
        int digit_a = 0;
        int digit_b = 0;

        if (a.length() > 0) {
            digit_a = a.back() - '0';
            a.pop_back();
        }

        if (b.length() > 0) {
            digit_b = b.back() - '0';
            b.pop_back();
        }

        int sum = digit_a + digit_b + carry;
        carry = sum / 10;
        sum = sum % 10;

        result = to_string(sum) + result;
    }

    return result;
}

string multiply(string num1, string num2) {
    int len1 = num1.length();
    int len2 = num2.length();
    string result = "0";

    for (int i = len1 - 1; i >= 0; i--) {
        int digit1 = num1[i] - '0';
        string partialProduct = "";

        int carry = 0;
        for (int j = len2 - 1; j >= 0; j--) {
            int digit2 = num2[j] - '0';
            int product = digit1 * digit2 + carry;
            carry = product / 10;
            product = product % 10;
            partialProduct = to_string(product) + partialProduct;
        }

        if (carry > 0) {
            partialProduct = to_string(carry) + partialProduct;
        }

        for (int k = i; k < len1 - 1; k++) {
            partialProduct += '0';
        }

        result = add(result, partialProduct);
    }
    return result;
}

string subtract(string a, string b) {
    int borrow = 0;
    string result = "";

    while (a.length() > 0 || b.length() > 0) {
        int digit_a = 0;
        int digit_b = 0;

        if (a.length() > 0) {
            digit_a = a.back() - '0';
            a.pop_back();
        }

        if (b.length() > 0) {
            digit_b = b.back() - '0';
            b.pop_back();
        }

        int diff = digit_a - digit_b - borrow;

        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result = to_string(diff) + result;
    }

    return result;
}

int is_greater_equal(string a, string b) {
    if (a.length() > b.length()) return 1;
    if (a.length() < b.length()) return 0;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] > b[i]) return 1;
        if (a[i] < b[i]) return 0;
    }

    return 1;
}

string divide(string dividend, string divisor) {
    string quotient = "";
    string remainder = "0";

    int index = 0;
    string partialDividend = "";

    while (index < dividend.length()) {
        partialDividend += dividend.substr(index, 1);
        int i;
        for (i = 0; i < partialDividend.length(); i++) {
            if (partialDividend[i] != '0') break;
        }
        partialDividend = partialDividend.substr(i, partialDividend.length());
        int quotientDigit = 0;
        while (is_greater_equal(partialDividend, divisor)) {
            partialDividend = subtract(partialDividend, divisor);
            quotientDigit++;
        }
        quotient += to_string(quotientDigit);
        index++;
    }

    int i;
    for (i = 0; i < quotient.length(); i++) {
        if (quotient[i] != '0') break;
    }
    quotient = quotient.substr(i, quotient.length() - 1);
	
    return quotient;
}

string modulo(string a,string b){
	string m = divide(a,b);
	m = multiply(m,b);
	return subtract(a,m);
}

int main() {
    string a = "860798509";
    string b = "198609463";
    string c = "1000000007";
    string x;
    cin >> x;
	// cout<<"add test\n"<<add("123","128371")<<"\n";
	 cout<<"divide test\n"<<modulo("121","11")<<"\n";
	// cout<<"subtract test\n"<<subtract("","")<<"\n";
	// cout<<"is_greater_equal test\n"<<is_greater_equal("","")<<"\n";
	if(x[0]=='-'){
		x=substr(1,x.length()-1);
		x=modulo(x,c);
		x=subtract(c,x);
	}
    //string result = divide(add(multiply(a, x), b), c);
    //cout << result << endl;

    return 0;
}