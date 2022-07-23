#include "Usuario.h"

Usuario::Usuario() {
	//generar conexion
	this->connString = "Data Source=DESKTOP-V04AA7H\\SQLEXPRESS;Initial Catalog=proyectocc2;Integrated Security=True";
	this->conn = gcnew SqlConnection(this->connString);
}

void Usuario::AbrirConexion() {
	this->conn->Open();
}

void Usuario::CerrarConexion() {
	this->conn->Close();
}

DataTable^ Usuario::getData() {
	String^ sqlQuery = "SELECT id , nombres , apellidos , permiso  FROM USUARIOS";
	SqlCommand^ cursor = gcnew SqlCommand( sqlQuery, this->conn);
	SqlDataAdapter^ data = gcnew SqlDataAdapter(cursor);

	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;

}

DataTable^ Usuario::getDataRegistro() {
	String^ sqlQuery2 = "SELECT ID , NOMBRE , APELLIDOS , PERMISO , HORA , DIA , MES , AÑO  FROM vigilancia ";
	SqlCommand^ cursor2 = gcnew SqlCommand(sqlQuery2, this->conn);
	SqlDataAdapter^ data2 = gcnew SqlDataAdapter(cursor2);

	DataTable^ tabla2 = gcnew DataTable();
	data2->Fill(tabla2);
	return tabla2;

}