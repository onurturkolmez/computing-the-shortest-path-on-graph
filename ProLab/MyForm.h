#include <iostream>
#include <sstream>
#include <string>
#pragma once

namespace ProLab {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			shortWayUnit = 0;
			distance = 0;
			InitializeComponent();
		}
	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

#pragma region form components
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	public: System::Windows::Forms::TextBox^ textbox;
	public: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  btnAbout;
	private: System::Windows::Forms::Button^  btnAdjacencyMatrix;
	private: System::Windows::Forms::Button^  btnShortestPath;
	private: System::Windows::Forms::Button^  btnReset;
	private: System::Windows::Forms::Label^  lblTotalPathDistance;
	private: System::Windows::Forms::ComboBox^  cbAlgorithms;

#pragma endregion

			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 void InitializeComponent(void)
			 {
				 this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->btnAdjacencyMatrix = (gcnew System::Windows::Forms::Button());
				 this->btnShortestPath = (gcnew System::Windows::Forms::Button());
				 this->btnReset = (gcnew System::Windows::Forms::Button());
				 this->lblTotalPathDistance = (gcnew System::Windows::Forms::Label());
				 this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
				 this->btnAbout = (gcnew System::Windows::Forms::Button());
				 this->cbAlgorithms = (gcnew System::Windows::Forms::ComboBox());
				 this->SuspendLayout();
				 this->tableLayoutPanel1->AutoSize = true;
				 this->tableLayoutPanel1->ColumnCount = 20;
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 5)));
				 this->tableLayoutPanel1->Location = System::Drawing::Point(26, 50);
				 this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
				 this->tableLayoutPanel1->RowCount = 20;
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
				 this->tableLayoutPanel1->Size = System::Drawing::Size(1081, 650);
				 this->tableLayoutPanel1->TabIndex = 0;
				 // 
				 // btnAdjacencyMatrix
				 // 
				 this->btnAdjacencyMatrix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->btnAdjacencyMatrix->Location = System::Drawing::Point(1113, 50);
				 this->btnAdjacencyMatrix->Name = L"btnAdjacencyMatrix";
				 this->btnAdjacencyMatrix->Size = System::Drawing::Size(176, 62);
				 this->btnAdjacencyMatrix->TabIndex = 2;
				 this->btnAdjacencyMatrix->Text = L"Adjacency Matrix";
				 this->btnAdjacencyMatrix->UseVisualStyleBackColor = true;
				 this->btnAdjacencyMatrix->Click += gcnew System::EventHandler(this, &MyForm::btnAdjacencyMatrix_Click);
				 // 
				 // btnShortestPath
				 // 
				 this->btnShortestPath->Enabled = false;
				 this->btnShortestPath->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->btnShortestPath->Location = System::Drawing::Point(1113, 148);
				 this->btnShortestPath->Name = L"btnShortestPath";
				 this->btnShortestPath->Size = System::Drawing::Size(176, 62);
				 this->btnShortestPath->TabIndex = 3;
				 this->btnShortestPath->Text = L"Paint the Shortest Path";
				 this->btnShortestPath->UseVisualStyleBackColor = true;
				 this->btnShortestPath->Click += gcnew System::EventHandler(this, &MyForm::btnShortestPath_Click);
				 // 
				 // btnReset
				 // 
				 this->btnReset->Location = System::Drawing::Point(1113, 21);
				 this->btnReset->Name = L"btnReset";
				 this->btnReset->Size = System::Drawing::Size(176, 23);
				 this->btnReset->TabIndex = 4;
				 this->btnReset->Text = L"Reset";
				 this->btnReset->UseVisualStyleBackColor = true;
				 this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
				 // 
				 // lblToplamAgacMaliyeti
				 // 
				 this->lblTotalPathDistance->AutoSize = true;
				 this->lblTotalPathDistance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->lblTotalPathDistance->ForeColor = System::Drawing::Color::DimGray;
				 this->lblTotalPathDistance->Location = System::Drawing::Point(21, 704);
				 this->lblTotalPathDistance->Name = L"lblToplamAgacMaliyeti";
				 this->lblTotalPathDistance->Size = System::Drawing::Size(207, 25);
				 this->lblTotalPathDistance->TabIndex = 5;
				 this->lblTotalPathDistance->Text = L"Total Path Distance ";
				 this->lblTotalPathDistance->Visible = false;
				 // 
				 // richTextBox1
				 // 
				 this->richTextBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
				 this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(162)));
				 this->richTextBox1->Location = System::Drawing::Point(1113, 216);
				 this->richTextBox1->Name = L"richTextBox1";
				 this->richTextBox1->Size = System::Drawing::Size(176, 444);
				 this->richTextBox1->TabIndex = 6;
				 this->richTextBox1->Text = L"";
				 // 
				 // btnAbout
				 // 
				 this->btnAbout->Location = System::Drawing::Point(1113, 666);
				 this->btnAbout->Name = L"btnAbout";
				 this->btnAbout->Size = System::Drawing::Size(176, 25);
				 this->btnAbout->TabIndex = 7;
				 this->btnAbout->Text = L"About";
				 this->btnAbout->UseVisualStyleBackColor = true;
				 this->btnAbout->Click += gcnew System::EventHandler(this, &MyForm::btnAbout_Click);
				 // 
				 // cbAlgorithms
				 // 
				 this->cbAlgorithms->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				 this->cbAlgorithms->FormattingEnabled = true;
				 this->cbAlgorithms->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Kruskal", L"Prim" });
				 this->cbAlgorithms->Location = System::Drawing::Point(1113, 118);
				 this->cbAlgorithms->Name = L"cbAlgorithms";
				 this->cbAlgorithms->Size = System::Drawing::Size(176, 24);
				 this->cbAlgorithms->TabIndex = 8;
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(1298, 738);
				 this->Controls->Add(this->cbAlgorithms);
				 this->Controls->Add(this->btnAbout);
				 this->Controls->Add(this->richTextBox1);
				 this->Controls->Add(this->lblTotalPathDistance);
				 this->Controls->Add(this->btnReset);
				 this->Controls->Add(this->btnShortestPath);
				 this->Controls->Add(this->btnAdjacencyMatrix);
				 this->Controls->Add(this->tableLayoutPanel1);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				 this->MaximizeBox = false;
				 this->MinimizeBox = false;
				 this->Name = L"MyForm";
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"Shortest Path on Graph";
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

			 //it keeps the coordinates that chosen nodes
	private: array<Int32, 2>^ matrix = gcnew array < Int32, 2 >(9, 2);

			 //it keeps the distance between nodes(adjacency matrix)
	private: array<Int32, 2>^ adjacencyMatrix;

			 //it keeps the distance between nodes(adjacency matrix)
	private: array<Int32>^ parent = gcnew array<Int32>(9);

			 //label texts for matrix coordinates after form load method
	private: int labelX, labelY;

			 //it keeps shortest path distance as unit
	private: int shortWayUnit;
			 int index = 0, index2 = 0; //matrix dizisine seçilen düðümlerin koordinatlarý atanýrken indis
			 int distance; //düðümler arasýndaki mesafe
			 int kmX; //komsuluk matrisi x koordinatý
			 int kmY; //komsuluk matrisi y koordinatý
			 int tempKmX; //temp komþuluk matrisi x koordinatý
			 int tempKmY; // temp komsuluk matrisi y koordinatý

			 //kýsa yol algoritmalarýnda kaç düðüm varsa bir eksiði kadar baðlantý olur.hesaplama yapýlýrken while döngüsünde
			 //bu deðiþken baþlangýçta hep 1'den baþlar ve dugum sayýsýna eþit oluncaya kadar 1 artýlýr.böylelikle baðlantý sayýsý aþýlmaz.
			 int numberOfEdge = 1;

			 int numberOfNode = 0; //toplam düðüm sayýsý
			 int min = 0; // en kýsa mesafe
			 bool didClickAdjacency = false; //komþuluk matrisi oluþturulduktan sonra yeni düðümlerin seçilmesini engeller

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

#pragma region 0 till 19 horizontal and vertical label text

		labelX = 26;
		labelY = 50;

		for (int i = 0; i < 20; i++) {
			label = gcnew Label();
			label->Location = System::Drawing::Point(labelX, 25);
			label->Name = L"label" + i.ToString();
			label->Size = System::Drawing::Size(24, 17);
			label->Text = i.ToString();
			this->Controls->Add(label);
			labelX += 40;
		}

		for (int i = 0; i < 20; i++) {
			label = gcnew Label();
			label->Location = System::Drawing::Point(4, labelY);
			label->Name = L"label" + i.ToString();
			label->Size = System::Drawing::Size(24, 17);
			label->Text = i.ToString();
			this->Controls->Add(label);
			labelY += 26;
		}
#pragma endregion

#pragma region Create a 20x20 matrix from textboxes

		for (int i = 0; i <= 19; i++) {
			for (int j = 0; j <= 19; j++) {
				textbox = gcnew TextBox();
				textbox->Click += gcnew System::EventHandler(this, &MyForm::graph_Click);
				textbox->BackColor = System::Drawing::SystemColors::Highlight;
				textbox->Name = j.ToString() + "," + i.ToString();
				textbox->Size = System::Drawing::Size(32, 20);
				textbox->ReadOnly = true;
				this->Controls->Add(textbox);
				this->tableLayoutPanel1->Controls->Add(textbox, j, i);
			}
		}
#pragma endregion

	}

	private: System::Void graph_Click(System::Object^  sender, System::EventArgs^  e) {
		if (numberOfNode < 9 && !didClickAdjacency)
		{
			TextBox^ a = safe_cast<TextBox^>(sender);

			//baþlangýçta düðümlerin yerlerinin seçilmesi
			a->BackColor = System::Drawing::SystemColors::ControlDark;
			if (numberOfNode == 0)
			{
				this->richTextBox1->Text += "Selected Nodes\n";
			}

			numberOfNode++;
			this->richTextBox1->Text += " N" + (numberOfNode - 1).ToString() + ":" + a->Name + "\n";
			a->Text = "N" + (numberOfNode - 1).ToString();

			String^ delimStr = ",";
			array<Char>^ delimiter = delimStr->ToCharArray();
			array<String^>^ words;
			String^ line = a->Name;

			words = line->Split(delimiter);
			for (int word = 0; word < words->Length; word++)
			{
				matrix[index, index2] = Convert::ToInt32(words[word]);
				index2++;
			}

			index++;
			index2 = 0;
		}
		else if (didClickAdjacency)
		{
			//
		}
		else
		{
			MessageBox::Show("You can choose 9 nodes maximum!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}

			 //düðümler arasý komþuluk matrisini oluþturur ve komsulukMatrisi dizisine atar
	private: System::Void btnAdjacencyMatrix_Click(System::Object^  sender, System::EventArgs^  e) {

		//komþuluk matrisinin mesafelerinin hesaplanmasý için boyanacak textboxlarýn baslangýç ve bitiþ noktalarýnýn x ve y koordinantlarý
		int baslangicNokX, bitisNokX, baslangicNokY, bitisNokY;

		adjacencyMatrix = gcnew array < Int32, 2 >(numberOfNode, numberOfNode);

		if (numberOfNode == 0)
		{
			MessageBox::Show("You can't make an adjacency matrix because you did not choose any node.!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

		else if (numberOfNode > 0 && numberOfNode <= 2)
		{
			MessageBox::Show("You need to choose at least 3 nodes to apply Kruskal algorithm correctly!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

		else if (numberOfNode > 2)
		{
			didClickAdjacency = true;
			this->btnAdjacencyMatrix->Enabled = false;
			this->btnShortestPath->Enabled = true;
			this->richTextBox1->Text += "\Adjacency matrices\n";

			//en kýsa yol algoritmasý için kullanýcak tüm düðümler arasýndaki mesafeler(komþuluk matrisleri) cost dizisine atanýr.
			for (int i = 0; i < numberOfNode; i++)
			{
				for (int j = 0; j < numberOfNode; j++)
				{
					if (i == j)
						adjacencyMatrix[i, j] = 999;
					else
					{
						distance = 1 + abs(matrix[i, 0] - matrix[j, 0]) + abs(matrix[i, 1] - matrix[j, 1]);
						if (distance == 1)
							adjacencyMatrix[i, j] = 999;
						else
							adjacencyMatrix[i, j] = distance;
					}
				}
			}

			//komþuluk matrisi (düðümler arasý mesafeler) oluþturulur.hangi düðümler arasýnda olduðu formda gösterilir.
			//örn:4 tane düðüm için= d0-d1, d0-d2, d0-d3, d1-d2, d1-d3, d2-d3
			//dikkat! formda d0-d1 mesafesi zaten gösterildiði için tekrardan d1-d0 mesafesi gösterilmez.

			for (int i = 0; i < numberOfNode - 1; i++)
			{
				for (int j = i; j < numberOfNode - 1; j++)
				{
					distance = 1 + abs(matrix[i, 0] - matrix[j + 1, 0]) + abs(matrix[i, 1] - matrix[j + 1, 1]);
					this->richTextBox1->Text += " D" + i.ToString() + "-D" + (j + 1).ToString() + ":" + distance.ToString() + " pu\n";

#pragma region komþuluk matrisi boyama
					if (matrix[i, 1] <= matrix[j + 1, 1])
					{
						if (matrix[i, 1] != 0)
						{
							baslangicNokY = matrix[i, 1];
							bitisNokY = matrix[j + 1, 1];
							baslangicNokX = matrix[j + 1, 0];
						}
						else
						{
							baslangicNokY = matrix[i, 1];
							bitisNokY = matrix[j + 1, 1];
							baslangicNokX = matrix[i, 0];
						}
					}
					else
					{
						baslangicNokY = matrix[j + 1, 1];
						bitisNokY = matrix[i, 1];
						baslangicNokX = matrix[i, 0];
					}

					for (int sayac = baslangicNokY; sayac <= bitisNokY - 1; sayac++)
					{
						this->tableLayoutPanel1->GetControlFromPosition(baslangicNokX, sayac)->BackColor = System::Drawing::SystemColors::ControlDark;
					}

					if (matrix[i, 0] <= matrix[j + 1, 0])
					{
						baslangicNokX = matrix[i, 0];
						bitisNokX = matrix[j + 1, 0];
					}
					else
					{
						baslangicNokX = matrix[j + 1, 0];
						bitisNokX = matrix[i, 0];
					}

					if (matrix[i, 1] <= matrix[j + 1, 1])
					{
						if (matrix[i, 1] != 0)
						{
							bitisNokY = matrix[i, 1];
						}
						else
						{
							bitisNokY = matrix[j + 1, 1];
						}
					}
					else
					{
						bitisNokY = matrix[j + 1, 1];
					}

					for (int sayac = baslangicNokX; sayac <= bitisNokX - 1; sayac++)
					{
						this->tableLayoutPanel1->GetControlFromPosition(sayac, bitisNokY)->BackColor = System::Drawing::SystemColors::ControlDark;
					}
#pragma endregion
				}
			}
		}
	}

			 //call prim or kruskal algorithm
	private: System::Void btnShortestPath_Click(System::Object^  sender, System::EventArgs^  e) {

		int basNokX, bitNokX, basNokY, bitNokY;

		this->btnShortestPath->Enabled = false;
		this->richTextBox1->Text += "\nNodes of shortest path\n";

#pragma region kruskal
		if (this->cbAlgorithms->SelectedItem == "Kruskal")
		{
			while (numberOfEdge < numberOfNode)
			{
				min = 999;
				for (int i = 0; i < numberOfNode; i++)
				{
					for (int j = 0; j < numberOfNode; j++)
					{
						if (adjacencyMatrix[i, j] < min)
						{
							min = adjacencyMatrix[i, j];
							tempKmX = i;
							tempKmY = j;
							kmX = i;
							kmY = j;
						}
					}
				}

				kmX = find(kmX);
				kmY = find(kmY);

				if (uni(kmX, kmY))
				{
					numberOfEdge++;
					this->richTextBox1->Text += " D" + tempKmX.ToString() + "-D" + tempKmY.ToString() + "=" + min.ToString() + " pu\n";

#pragma region en kýsa yolu boyama
					if (matrix[kmX, 1] <= matrix[kmY, 1])
					{
						if (matrix[kmX, 1] != 0)
						{
							basNokY = matrix[kmX, 1];
							bitNokY = matrix[kmY, 1];
							basNokX = matrix[kmY, 0];
						}
						else
						{
							/*basNokY = matrix[v, 1];
							bitNokY = matrix[u, 1];
							basNokX = matrix[u, 0];*/
							basNokY = matrix[kmX, 1];
							bitNokY = matrix[kmY, 1];
							basNokX = matrix[kmX, 0];
						}
					}
					else
					{
						basNokY = matrix[kmY, 1];
						bitNokY = matrix[kmX, 1];
						basNokX = matrix[kmX, 0];
					}

					for (int sayac = basNokY; sayac <= bitNokY - 1; sayac++)
					{
						this->tableLayoutPanel1->GetControlFromPosition(basNokX, sayac)->BackColor = System::Drawing::Color::FromArgb(0, 100, 0);
					}

					if (matrix[kmX, 0] <= matrix[kmY, 0])
					{
						basNokX = matrix[kmX, 0];
						bitNokX = matrix[kmY, 0];
					}
					else
					{
						basNokX = matrix[kmY, 0];
						bitNokX = matrix[kmX, 0];
					}

					if (matrix[kmX, 1] <= matrix[kmY, 1])
					{
						if (matrix[kmX, 1] != 0)
						{
							bitNokY = matrix[kmX, 1];
						}
						else
						{
							bitNokY = matrix[kmY, 1];
						}
					}
					else
					{
						bitNokY = matrix[kmY, 1];
					}

					for (int sayac = basNokX; sayac <= bitNokX - 1; sayac++)
					{
						this->tableLayoutPanel1->GetControlFromPosition(sayac, bitNokY)->BackColor = System::Drawing::Color::FromArgb(0, 100, 0);
					}
#pragma endregion

					shortWayUnit += min;
					//parent[v] = u;
				}
				adjacencyMatrix[tempKmX, tempKmY] = 999;
				adjacencyMatrix[tempKmY, tempKmX] = 999;
			}
		}
#pragma endregion

#pragma region prim
		else if (this->cbAlgorithms->SelectedItem == "Prim")
		{
			parent[1] = 1;
			while (numberOfEdge < numberOfNode)
			{
				min = 999;
				for (int i = 0; i < numberOfNode; i++)
				{
					for (int j = 0; j < numberOfNode; j++)
					{
						if (adjacencyMatrix[i, j] < min)
						{
							if (parent[i] != 0)
							{
								min = adjacencyMatrix[i, j];
								kmX = i;
								kmY = j;
							}
						}
					}
				}

				if (parent[kmX] == 0 || parent[kmY] == 0)
				{
					numberOfEdge++;
					this->richTextBox1->Text += " D" + kmX.ToString() + "-D" + kmY.ToString() + "=" + min.ToString() + " pu\n";

#pragma region en kýsa yolu boyama
					if (matrix[kmX, 1] <= matrix[kmY, 1])
					{
						if (matrix[kmX, 1] != 0)
						{
							basNokY = matrix[kmX, 1];
							bitNokY = matrix[kmY, 1];
							basNokX = matrix[kmY, 0];
						}
						else
						{
							/*basNokY = matrix[v, 1];
							bitNokY = matrix[u, 1];
							basNokX = matrix[u, 0];*/
							basNokY = matrix[kmX, 1];
							bitNokY = matrix[kmY, 1];
							basNokX = matrix[kmX, 0];
						}
					}
					else
					{
						basNokY = matrix[kmY, 1];
						bitNokY = matrix[kmX, 1];
						basNokX = matrix[kmX, 0];
					}

					for (int sayac = basNokY; sayac <= bitNokY - 1; sayac++)
					{
						this->tableLayoutPanel1->GetControlFromPosition(basNokX, sayac)->BackColor = System::Drawing::Color::FromArgb(0, 100, 0);
					}

					if (matrix[kmX, 0] <= matrix[kmY, 0])
					{
						basNokX = matrix[kmX, 0];
						bitNokX = matrix[kmY, 0];
					}
					else
					{
						basNokX = matrix[kmY, 0];
						bitNokX = matrix[kmX, 0];
					}

					if (matrix[kmX, 1] <= matrix[kmY, 1])
					{
						if (matrix[kmX, 1] != 0)
						{
							bitNokY = matrix[kmX, 1];
						}
						else
						{
							bitNokY = matrix[kmY, 1];
						}
					}
					else
					{
						bitNokY = matrix[kmY, 1];
					}

					for (int sayac = basNokX; sayac <= bitNokX - 1; sayac++)
					{
						this->tableLayoutPanel1->GetControlFromPosition(sayac, bitNokY)->BackColor = System::Drawing::Color::FromArgb(0, 100, 0);
					}
#pragma endregion

					shortWayUnit += min;
					parent[kmY] = 1;
				}

				adjacencyMatrix[kmX, kmY] = 999;
				adjacencyMatrix[kmY, kmX] = 999;
			}
		}
#pragma endregion

		this->lblTotalPathDistance->Visible = true;
		this->lblTotalPathDistance->Text += shortWayUnit.ToString() + " pu";
	}

			 //It makes the changes and form elements take the initial state.
	private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i <= 19; i++) {
			for (int j = 0; j <= 19; j++) {
				this->tableLayoutPanel1->GetControlFromPosition(i, j)->BackColor = System::Drawing::SystemColors::Highlight;
				this->tableLayoutPanel1->GetControlFromPosition(i, j)->Text = "";
			}
		}

		this->richTextBox1->Text = "";
		this->lblTotalPathDistance->Text = "Total Path Distance:";
		this->lblTotalPathDistance->Visible = false;
		this->cbAlgorithms->SelectedItem = "Kruskal";
		this->btnAdjacencyMatrix->Enabled = true;
		numberOfNode = 0;
		matrix = gcnew array < Int32, 2 >(9, 2);
		shortWayUnit = 0;
		adjacencyMatrix = gcnew array < Int32, 2 >(numberOfNode, numberOfNode);
		parent = gcnew array<Int32>(9);
		index = 0;
		index2 = 0;
		distance = 0;
		numberOfEdge = 1;
		min = 0;
		didClickAdjacency = false;

	}

			 //author ýnfo
	private: System::Void btnAbout_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("ONUR TURKOLMEZ", "Project of Programming Language 2 Course", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}

	private: System::Int32 find(Int32 i)
	{
		while (parent[i])
			i = parent[i];
		return i;
	}

	private: System::Int32 uni(int i, int j)
	{
		if (i != j)
		{
			parent[j] = i;
			return 1;
		}
		return 0;
	}
	};
}
