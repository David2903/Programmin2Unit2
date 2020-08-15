namespace UwU
{
    partial class GFizzi
    {
        private System.ComponentModel.IContainer components = null;
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }
        private System.Windows.Forms.Label Question;
        private System.Windows.Forms.Button SI;
        private System.Windows.Forms.Button NO;

        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(GFizzi));
            this.Question = new System.Windows.Forms.Label();
            this.SI = new System.Windows.Forms.Button();
            this.NO = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // Question
            // 
            this.Question.AutoSize = true;
            this.Question.Font = new System.Drawing.Font("Microsoft Sans Serif", 25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Question.Location = new System.Drawing.Point(12, 153);
            this.Question.Name = "Question";
            this.Question.Size = new System.Drawing.Size(494, 39);
            this.Question.TabIndex = 0;
            this.Question.Text = "¿Quieres estudiar en el UPY?";
            this.Question.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.Question.Click += new System.EventHandler(this.Question_Click);
            // 
            // SI
            // 
            this.SI.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(0)))), ((int)(((byte)(64)))));
            this.SI.FlatAppearance.BorderSize = 0;
            this.SI.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.SI.Font = new System.Drawing.Font("Calibri Light", 15F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.SI.ForeColor = System.Drawing.Color.White;
            this.SI.Location = new System.Drawing.Point(114, 308);
            this.SI.Name = "SI";
            this.SI.Size = new System.Drawing.Size(80, 60);
            this.SI.TabIndex = 1;
            this.SI.TabStop = false;
            this.SI.Text = "Claro que si";
            this.SI.UseVisualStyleBackColor = false;
            this.SI.Click += new System.EventHandler(this.SI_Click);
            // 
            // NO
            // 
            this.NO.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(0)))), ((int)(((byte)(64)))));
            this.NO.FlatAppearance.BorderSize = 0;
            this.NO.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.NO.Font = new System.Drawing.Font("Calibri Light", 15F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.NO.ForeColor = System.Drawing.Color.White;
            this.NO.Location = new System.Drawing.Point(305, 308);
            this.NO.Name = "NO";
            this.NO.Size = new System.Drawing.Size(80, 60);
            this.NO.TabIndex = 1;
            this.NO.TabStop = false;
            this.NO.Text = "No:(";
            this.NO.UseVisualStyleBackColor = false;
            this.NO.MouseEnter += new System.EventHandler(this.NO_MouseEnter);
            // 
            // GFizzi
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DarkOrchid;
            this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
            this.ClientSize = new System.Drawing.Size(500, 500);
            this.Controls.Add(this.NO);
            this.Controls.Add(this.SI);
            this.Controls.Add(this.Question);
            this.ForeColor = System.Drawing.SystemColors.ButtonFace;
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "GFizzi";
            this.Text = "UPY";
            this.TopMost = true;
            this.Load += new System.EventHandler(this.GFizzi_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

    }
}

