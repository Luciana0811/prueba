#pragma once
#include "Usuario.h" //incluir clase usurios

namespace PuestoVigilancia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class RegistroDeIngreso : public System::Windows::Forms::Form
	{
	public:
		RegistroDeIngreso(void)
		{
			InitializeComponent();
			
			this->data2 = gcnew Usuario();
			
		}

	protected:
		
		~RegistroDeIngreso()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Usuario^ data2;
	private: System::Windows::Forms::DataGridView^ data_grid;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ DIA;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ btnRegresar;
	private: System::Windows::Forms::Button^ btnSalir;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->DIA = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btnRegresar = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// data_grid
			// 
			this->data_grid->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid->Location = System::Drawing::Point(22, 104);
			this->data_grid->Name = L"data_grid";
			this->data_grid->RowHeadersWidth = 51;
			this->data_grid->RowTemplate->Height = 24;
			this->data_grid->Size = System::Drawing::Size(887, 470);
			this->data_grid->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(140, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(956, 43);
			this->label1->TabIndex = 6;
			this->label1->Text = L"REGISTRO DE ENTRADA Y SALIDA DE USUARIOS";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16));
			this->label5->Location = System::Drawing::Point(937, 317);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 27);
			this->label5->TabIndex = 19;
			this->label5->Text = L"AÑO:";
			this->label5->Click += gcnew System::EventHandler(this, &RegistroDeIngreso::label5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox4->Location = System::Drawing::Point(1041, 313);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(125, 36);
			this->textBox4->TabIndex = 18;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &RegistroDeIngreso::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16));
			this->label4->Location = System::Drawing::Point(937, 246);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 27);
			this->label4->TabIndex = 17;
			this->label4->Text = L"MES:";
			this->label4->Click += gcnew System::EventHandler(this, &RegistroDeIngreso::label4_Click);
			// 
			// DIA
			// 
			this->DIA->AutoSize = true;
			this->DIA->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16));
			this->DIA->Location = System::Drawing::Point(937, 175);
			this->DIA->Name = L"DIA";
			this->DIA->Size = System::Drawing::Size(59, 27);
			this->DIA->TabIndex = 15;
			this->DIA->Text = L"DIA:";
			this->DIA->Click += gcnew System::EventHandler(this, &RegistroDeIngreso::label3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox2->Location = System::Drawing::Point(1041, 171);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(125, 36);
			this->textBox2->TabIndex = 14;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &RegistroDeIngreso::textBox2_TextChanged);
			// 
			// btnRegresar
			// 
			this->btnRegresar->Location = System::Drawing::Point(932, 591);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(92, 38);
			this->btnRegresar->TabIndex = 22;
			this->btnRegresar->Text = L"REGRESAR";
			this->btnRegresar->UseVisualStyleBackColor = true;
			// 
			// btnSalir
			// 
			this->btnSalir->Location = System::Drawing::Point(1090, 591);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(94, 38);
			this->btnSalir->TabIndex = 21;
			this->btnSalir->Text = L"SALIR";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &RegistroDeIngreso::btnSalir_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::Color::White;
			this->btnBuscar->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10, System::Drawing::FontStyle::Bold));
			this->btnBuscar->Location = System::Drawing::Point(1041, 444);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(125, 41);
			this->btnBuscar->TabIndex = 20;
			this->btnBuscar->Text = L"BUSCAR";
			this->btnBuscar->UseVisualStyleBackColor = false;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(1041, 236);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(125, 37);
			this->comboBox1->TabIndex = 23;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &RegistroDeIngreso::comboBox1_SelectedIndexChanged);
			// 
			// RegistroDeIngreso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1196, 641);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->btnRegresar);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->DIA);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->data_grid);
			this->Name = L"RegistroDeIngreso";
			this->Text = L"RegistroDeIngreso";
			this->Load += gcnew System::EventHandler(this, &RegistroDeIngreso::RegistroDeIngreso_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RegistroDeIngreso_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->Items->Add("Enero");
		comboBox1->Items->Add("Febrero");
		comboBox1->Items->Add("Marzo");
		comboBox1->Items->Add("Abril");
		comboBox1->Items->Add("Mayo");
		comboBox1->Items->Add("Julio");
		comboBox1->Items->Add("Agosto");
		comboBox1->Items->Add("Septiembre");
		comboBox1->Items->Add("Octubre");
		comboBox1->Items->Add("Noviembre");
		comboBox1->Items->Add("Diciembre");

		comboBox1->Items->Add("Mayo");
		this->ConsultaRegistro();
	}

	public: void ConsultaRegistro() {
		this->data2->AbrirConexion();
		this->data_grid->DataSource = this->data2->getDataRegistro();
		this->data2->CerrarConexion();
	}

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
