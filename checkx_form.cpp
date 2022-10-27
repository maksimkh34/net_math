#include "checkx_form.h"

float getint(System::Windows::Forms::TextBox^ tb)
{
	float x;
	std::stringstream stream;
	std::string x1_str = msclr::interop::marshal_as<std::string>(tb->Text);
	stream << x1_str;
	stream >> x;
	return x;
}

bool checkx(float x, float a, float b, float c)
{
	if (a * (x * x) + b * x + c == 0) return true;
	return false;
}
