#!/usr/bin/env pike
// 두 개의 string으로 표현된 큰 정수 값을 더하는 함수
string add(string a, string b) {
    int carry = 0;
    string result = "";

    while (strlen(a) > 0 || strlen(b) > 0 || carry > 0) {
        int digit_a = 0;
        int digit_b = 0;

        if (strlen(a) > 0) {
			int index = strlen(a) - 1;
			sscanf(a[index..index], "%d", digit_a);
            a = a[0..index - 1];
        }

        if (strlen(b) > 0) {
			int index = strlen(b) - 1;
			sscanf(b[index..index], "%d", digit_b);
            b = b[0..index - 1];
        }

        int sum = digit_a + digit_b + carry;
        carry = sum / 10;
        sum = sum % 10;

        result = sprintf("%d%s", sum, result);
    }

    return result;
}
// 두 개의 string으로 표현된 큰 정수 값을 곱하는 함수
string multiply(string num1, string num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    string result = "0";

    for (int i = len1 - 1; i >= 0; i--) {
		int digit1;
		sscanf(num1[i..i], "%d", digit1);
        string partialProduct = "";

        int carry = 0;
        for (int j = len2 - 1; j >= 0; j--) {
            int digit2;
			sscanf(num2[j..j], "%d", digit2);
            int product = digit1 * digit2 + carry;
            carry = product / 10;
            product = product % 10;
            partialProduct = sprintf("%d%s", product, partialProduct);
        }

        if (carry > 0) {
            partialProduct = sprintf("%d%s", carry, partialProduct);
        }

        for (int k = i; k < len1 - 1; k++) {
            partialProduct = sprintf("%s%d", partialProduct, 0);
        }

        result = add(result, partialProduct);
    }

    return result;
}

// 두 개의 string으로 표현된 큰 정수 값을 빼는 함수
string subtract(string a, string b) {
    int borrow = 0;
    string result = "";

    while (strlen(a) > 0 || strlen(b) > 0) {
        int digit_a = 0;
        int digit_b = 0;

        if (strlen(a) > 0) {
			int index = strlen(a) - 1;
			sscanf(a[index..index], "%d", digit_a);
            a = a[0..index - 1];
        }

        if (strlen(b) > 0) {
			int index = strlen(b) - 1;
			sscanf(b[index..index], "%d", digit_b);
            b = b[0..index - 1];
        }

        int diff = digit_a - digit_b - borrow;

        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result = sprintf("%d%s", diff, result);
    }

    return result;
}


// 두 개의 string으로 표현된 큰 정수 값을 비교하는 함수
int is_greater_equal(string a, string b) {
    if (strlen(a) > strlen(b)) return 1;
    if (strlen(a) < strlen(b)) return 0;

    for (int i = 0; i < strlen(a); i++) {
        if (a[i] > b[i]) return 1;
        if (a[i] < b[i]) return 0;
    }
    return 1;
}
// 두 개의 string으로 표현된 큰 정수 값을 나누는 함수
string divide(string dividend, string divisor) {
    // 나눗셈 결과를 저장할 변수들
    string quotient = "";
    string remainder = "0";

    int index = 0;
    string partialDividend = "";

    // 피제수에서 한 자리씩 가져와서 나누기 연산 수행
    while (index < strlen(dividend)) {
        partialDividend += dividend[index..index];
		int i;
		for(i=0;i<strlen(partialDividend);i++){
			if(partialDividend[i]!='0') break;
		}
		partialDividend=partialDividend[i..strlen(partialDividend)-1];
        int quotientDigit = 0;

        // 피제수가 피제수보다 작을 때까지 나누기 연산 수행
        while (is_greater_equal(partialDividend,divisor)) {
            partialDividend = subtract(partialDividend, divisor);
            quotientDigit++;
        }
        index++;
    }
	int i;
	for(i=0;i<strlen(partialDividend);i++){
		if(partialDividend[i]!='0') break;
	}
	partialDividend=partialDividend[i..strlen(partialDividend)-1];

    return partialDividend;
}

int main() {
    string a = "860798509";
    string b = "198609463";
    string c = "1000000007";
    string x = Stdio.stdin->gets();
	if(x[0]=='-'){
		x=x[1..strlen(x)-1];
		x=divide(x,c);
		x=subtract(c,x);
	}
    string result = divide(add(multiply(a, x), b), c);
    Stdio.stdout->write(result);

    return 0;
}
int main() {
    string line = Stdio.stdin->gets();
    sscanf(line, "%d", int x);
    int a = 860798509;
    int b = 198609463;
    int res = (a * x + b) % 1000000007;
    write(res +"\n");
    return 0;
}