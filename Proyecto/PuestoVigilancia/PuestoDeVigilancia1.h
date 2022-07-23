#pragma once
#include "Usuario.h" //incluir clase usurios
#include "PuestoDeVigilancia1.h"
#include "PuestoVigilanciaMostrar.h"
#include "RegistroDeIngreso.h"

namespace PuestoVigilancia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PuestoDeVigilancia1
	/// </summary>
	public ref class PuestoDeVigilancia1 : public System::Windows::Forms::Form
	{
	public:
		PuestoDeVigilancia1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PuestoDeVigilancia1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnListaUsuarios;
	protected:
	private: System::Windows::Forms::Button^ btnRegistro;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ btnSalir;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnListaUsuarios = (gcnew System::Windows::Forms::Button());
			this->btnRegistro = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnListaUsuarios
			// 
			this->btnListaUsuarios->Location = System::Drawing::Point(92, 242);
			this->btnListaUsuarios->Name = L"btnListaUsuarios";
			this->btnListaUsuarios->Size = System::Drawing::Size(242, 92);
			this->btnListaUsuarios->TabIndex = 0;
			this->btnListaUsuarios->Text = L"LISTA DE USUARIOS";
			this->btnListaUsuarios->UseVisualStyleBackColor = true;
			this->btnListaUsuarios->Click += gcnew System::EventHandler(this, &PuestoDeVigilancia1::btnListaUsuarios_Click);
			// 
			// btnRegistro
			// 
			this->btnRegistro->Location = System::Drawing::Point(449, 242);
			this->btnRegistro->Name = L"btnRegistro";
			this->btnRegistro->Size = System::Drawing::Size(242, 92);
			this->btnRegistro->TabIndex = 1;
			this->btnRegistro->Text = L"REGISTRO ENTRADA Y SALIDA";
			this->btnRegistro->UseVisualStyleBackColor = true;
			this->btnRegistro->Click += gcnew System::EventHandler(this, &PuestoDeVigilancia1::btnRegistro_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(139, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(491, 43);
			this->label1->TabIndex = 2;
			this->label1->Text = L"MODULO DE VIGILANCIA";
			// 
			// btnSalir
			// 
			this->btnSalir->Location = System::Drawing::Point(611, 521);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(142, 34);
			this->btnSalir->TabIndex = 4;
			this->btnSalir->Text = L"SALIR";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &PuestoDeVigilancia1::btnSalir_Click);
			// 
			// PuestoDeVigilancia1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(787, 595);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnRegistro);
			this->Controls->Add(this->btnListaUsuarios);
			this->Name = L"PuestoDeVigilancia1";
			this->Text = L"PuestoDeVigilancia1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Usuario^ user = nullptr;
	public: bool switchPuestoVigilancia = false;
	private: System::Void btnListaUsuarios_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchPuestoVigilancia = true;
		this->Close();
	}
	public: bool switchPuestoVigilancia2 = false;

	private: System::Void btnRegistro_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchPuestoVigilancia2 = true;
		this->Close();
	}


	private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
