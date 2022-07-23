#include "PuestoDeVigilancia1.h"
#include "PuestoVigilanciaMostrar.h"
#include "Usuario.h"

using namespace PuestoVigilancia;


int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Usuario^ user = nullptr;


	while (true) {
		PuestoVigilancia::PuestoDeVigilancia1 inicio;
		inicio.ShowDialog();
		if (inicio.switchPuestoVigilancia) {
			PuestoVigilancia::PuestoVigilanciaMostrar mostrar_usuarios;
			mostrar_usuarios.ShowDialog();
		}
		if (inicio.switchPuestoVigilancia2) {
			PuestoVigilancia::RegistroDeIngreso mostrar_registro;
			mostrar_registro.ShowDialog();
			break;
		}
	}


	return 0;
}