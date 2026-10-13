using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab4
{
    class Student
    {
        public string Name;
        public int RollNumber;
        public float Cgpa;
        public int MatricMarks;
        public int FscMarks;
        public int EcatMarks;
        public string HomeTown;
        public bool IsHostelite;
        public bool IsTakingScholarship;

        public float CalculateMerit()
        {
            float merit = ((FscMarks / 1100f) * 0.7f + (EcatMarks / 400f) * 0.3f) * 100f;
            return merit;
        }
        public bool IsEligibleForScholarship(float meritPercentage)
        {
            return meritPercentage >= 80 && IsHostelite;
        }

        public void DisplayInfo()
        {
            Console.WriteLine("===== Student Information =====");
            Console.WriteLine("Name: " + Name);
            Console.WriteLine("Roll Number: " + RollNumber);
            Console.WriteLine("CGPA: " + Cgpa);
            Console.WriteLine("Matric Marks: " + MatricMarks);
            Console.WriteLine("FSc Marks: " + FscMarks);
            Console.WriteLine("ECAT Marks: " + EcatMarks);
            Console.WriteLine("Home Town: " + HomeTown);
            Console.WriteLine("Hostelite: " + (IsHostelite ? "Yes" : "No"));
            Console.WriteLine("---------------------------------");

            if (IsTakingScholarship)
            {
                Console.WriteLine("Scholarship Status: Eligible for Scholarship 🎓");
            }
            else
            {
                Console.WriteLine("Scholarship Status: Not Eligible ❌");
            }

            Console.WriteLine("=================================\n");
        }

        class Program
        {
            static void Main(string[] args)
            {
                Student s1 = new Student();

                Console.Write("Enter Name: ");
                s1.Name = Console.ReadLine();

                Console.Write("Enter Roll Number: ");
                s1.RollNumber = int.Parse(Console.ReadLine());

                Console.Write("Enter CGPA: ");
                s1.Cgpa = float.Parse(Console.ReadLine());

                Console.Write("Enter Matric Marks: ");
                s1.MatricMarks = int.Parse(Console.ReadLine());

                Console.Write("Enter Fsc Marks (out of 1100): ");
                s1.FscMarks = int.Parse(Console.ReadLine());

                Console.Write("Enter Ecat Marks (out of 400): ");
                s1.EcatMarks = int.Parse(Console.ReadLine());

                Console.Write("Enter Home Town: ");
                s1.HomeTown = Console.ReadLine();

                Console.Write("Is student a hostelite? (true/false): ");
                s1.IsHostelite = bool.Parse(Console.ReadLine());

                float merit = s1.CalculateMerit();

                s1.IsTakingScholarship = s1.IsEligibleForScholarship(merit);

                Console.WriteLine("\n--- Student Information ---");
                s1.DisplayInfo();

                Console.WriteLine("\nCalculated Merit: " + merit.ToString("F2") + "%");
            }
        }
    }
}

