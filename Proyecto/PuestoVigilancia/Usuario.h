#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;


ref class Usuario
{
private:
	String^ connString;
	SqlConnection^ conn;
public:
	Usuario();//constructor
	DataTable^ getData();
	DataTable^ getDataRegistro();
	void AbrirConexion();
	void CerrarConexion();
};

