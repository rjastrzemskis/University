using System;
using System.Windows.Forms;

namespace _4MD_Rihards_Jastržemskis_
{
    public partial class Form : System.Windows.Forms.Form
    {

        Functions functions = new Functions();
        public Form()
        {
            InitializeComponent();
            functions.FirstNumber = Convert.ToString(0);
            functions.SecondNumber = Convert.ToString(0);
            reminderNumber.Text = functions.SecondNumber;
            enteredNumber.Text = functions.SecondNumber;
        }

        private void InputButtons_Click(object sender, EventArgs e)
        {
            var buttonName = (sender as Button).Name;

            if (buttonName == "buttonAbs" || buttonName == "buttonComma")
                functions.SecondNumber = functions.OtherInput(buttonName);
            else
                functions.SecondNumber = functions.NumberInput(buttonName);
            
            enteredNumber.Text = functions.SecondNumber;
        }

        private void ActionButtons_Click(object sender, EventArgs e)
        {
            var buttonText = (sender as Button).Text;

            if (buttonText == "/" && functions.SecondNumber == "0")
            {
                MessageBox.Show("Kļūda: dalīt ar nulli nedrīkst!");
                functions.SecondNumber = "0";
                enteredNumber.Text = functions.SecondNumber;
            }
            else if (buttonText == "/" && functions.FirstNumber == "0")
            {
                MessageBox.Show("Bezgalība!");
                functions.SecondNumber = "0";
                enteredNumber.Text = functions.SecondNumber;
            }
            else
            {
                functions.Operation = buttonText;
                reminderNumber.Text = functions.MathematicalOperators();
                enteredNumber.Text = functions.SecondNumber;
            }
        }

        private void OtherActionButtons_Click(object sender, EventArgs e)
        {
            var buttonText = (sender as Button).Text;

            functions.Operation = buttonText;
            reminderNumber.Text = functions.OtherOperators();
            enteredNumber.Text = functions.SecondNumber;
        }

        private void EqualButton_Click(object sender, EventArgs e)
        {
            enteredNumber.Text = functions.MathematicalOperators();

            var buttonText = (sender as Button).Text;

            functions.Operation = buttonText;
            enteredNumber.Text = functions.OtherOperators();
            reminderNumber.Text = functions.SecondNumber;
        }
    }
}

