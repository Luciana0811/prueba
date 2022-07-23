#pragma once
#include "Usuario.h" //incluir clase usurios
namespace PuestoVigilancia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class PuestoVigilanciaMostrar : public System::Windows::Forms::Form
	{
	public:
		PuestoVigilanciaMostrar(void)
		{
			InitializeComponent();

			this->data = gcnew Usuario();
		
		}

	protected:
		
		~PuestoVigilanciaMostrar()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: Usuario^ data;
	private: System::Windows::Forms::DataGridView^ data_grid;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Button^ btnSalir;
	private: System::Windows::Forms::Button^ btnRegresar;



	protected:

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->btnRegresar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// data_grid
			// 
			this->data_grid->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid->Location = System::Drawing::Point(24, 106);
			this->data_grid->Name = L"data_grid";
			this->data_grid->RowHeadersWidth = 51;
			this->data_grid->RowTemplate->Height = 24;
			this->data_grid->Size = System::Drawing::Size(606, 492);
			this->data_grid->TabIndex = 0;
			this->data_grid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PuestoVigilanciaMostrar::data_grid_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(419, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(412, 43);
			this->label1->TabIndex = 5;
			this->label1->Text = L"LISTA DE USUARIOS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16));
			this->label2->Location = System::Drawing::Point(647, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 27);
			this->label2->TabIndex = 7;
			this->label2->Text = L"PERMISO:";
			this->label2->Click += gcnew System::EventHandler(this, &PuestoVigilanciaMostrar::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16));
			this->label3->Location = System::Drawing::Point(647, 198);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 27);
			this->label3->TabIndex = 9;
			this->label3->Text = L"NOMBRE:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox2->Location = System::Drawing::Point(817, 194);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(356, 36);
			this->textBox2->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16));
			this->label4->Location = System::Drawing::Point(647, 269);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(156, 27);
			this->label4->TabIndex = 11;
			this->label4->Text = L"APELLIDOS:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox3->Location = System::Drawing::Point(817, 265);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(356, 36);
			this->textBox3->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16));
			this->label5->Location = System::Drawing::Point(647, 340);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 27);
			this->label5->TabIndex = 13;
			this->label5->Text = L"ID:";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox4->Location = System::Drawing::Point(817, 336);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(356, 36);
			this->textBox4->TabIndex = 12;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(817, 117);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(355, 37);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &PuestoVigilanciaMostrar::comboBox1_SelectedIndexChanged);
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::Color::White;
			this->btnBuscar->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10, System::Drawing::FontStyle::Bold));
			this->btnBuscar->Location = System::Drawing::Point(946, 433);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(196, 37);
			this->btnBuscar->TabIndex = 15;
			this->btnBuscar->Text = L"BUSCAR";
			this->btnBuscar->UseVisualStyleBackColor = false;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &PuestoVigilanciaMostrar::btnBuscar_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->Location = System::Drawing::Point(1031, 564);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(142, 34);
			this->btnSalir->TabIndex = 16;
			this->btnSalir->Text = L"SALIR";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &PuestoVigilanciaMostrar::btnSalir_Click);
			// 
			// btnRegresar
			// 
			this->btnRegresar->Location = System::Drawing::Point(780, 564);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(142, 34);
			this->btnRegresar->TabIndex = 17;
			this->btnRegresar->Text = L"REGRESAR";
			this->btnRegresar->UseVisualStyleBackColor = true;
			// 
			// PuestoVigilanciaMostrar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1196, 641);
			this->Controls->Add(this->btnRegresar);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->data_grid);
			this->Name = L"PuestoVigilanciaMostrar";
			this->Text = L"PuestoVigilanciaMostrar";
			this->Load += gcnew System::EventHandler(this, &PuestoVigilanciaMostrar::PuestoVigilanciaMostrar_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void PuestoVigilanciaMostrar_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->Items->Add("Jefe de Almacen");
		comboBox1->Items->Add("Controlador de Recepcion");
		comboBox1->Items->Add("Controlador de Expedicion");
		comboBox1->Items->Add("Operario de Pedidos");
		comboBox1->Items->Add("Personal de Vigilancia");
		this->Consulta();
	}

	public: void Consulta() {
		this->data->AbrirConexion();
		this->data_grid->DataSource = this->data->getData();
		this->data->CerrarConexion();
	}


	//private: System::Void data_grid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//}
	private: System::Void data_grid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
//private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
//}

	private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}

