// Q1. Write a C++ program to calculate average marks scored by a student for 3 subjects.

#include <iostream>
using namespace std;
class AverageMarks {
private:
	double a, b, c;
public:
	AverageMarks( double a, double b, double c ) {
		this->a = a;
		this->b = b;
		this->c = c;
	};
	double avgMarks() {
		double total = a + b + c;
		return total / 3;
	};
};
int main() {
	double marks1, marks2, marks3;
	cout << "Enter marks of three subjects : " << endl;
	cin >> marks1 >> marks2 >> marks3;
	AverageMarks MyAvgMarks( marks1, marks2, marks3 );
	cout << "Average marks : " << MyAvgMarks.avgMarks() << endl;
	return 0;




#############₹₹##₹#₹
from playwright import sync_playwright

with sync_playwright() as playwright:

    browser = playwright.chromium.launch()

    context = browser.new_context()

    page = context.new_page()

    # Log in to Facebook

    page.goto("https://www.facebook.com/")

    page.type("#email", "YOUR_EMAIL")

    page.type("#pass", "YOUR_PASSWORD")

    page.click("#loginbutton")

    # Go to your Facebook profile

    page.goto("https://www.facebook.com/YOUR_USERNAME/")

    # Get all post IDs

    post_ids = []

    while True:

        post_elements = page.query_selector_all("._1xnd")

        for post_element in post_elements:

            post_id = post_element.get_attribute("id")

            post_ids.append(post_id)

        if not page.query_selector("._4khu"):

            break

        page.click("._4khu")

    print(post_ids)

    browser.close()

