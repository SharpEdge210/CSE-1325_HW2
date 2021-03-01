using namespace std;

// a class of student that is used to calculate average grade based on exam and homework grades
class Student{
	public:
		double grade, avg, eavg, havg;

		Student (string name){
			student_name = name;
		}

		string name(){
			return student_name;
		}

		void exam(double grade){
			
			exam_sum += grade;
			exam_num_grades++;
		}

		// average is weighted for the homework and exam grades
		double average(){
			try{
				eavg = exam_sum / exam_num_grades;
				eavg *= 0.4;
				havg = homework_sum / homework_num_grades;
				havg *= 0.6;
				avg = eavg + havg;
				return avg;
			}catch(exception e){
				cerr << "Runtime Error" << e.what();
			}
		}

		void homework(double grade){
			homework_sum += grade;
			homework_num_grades++;
		}

	private:
		string student_name;
		double exam_sum = 0;
		double exam_num_grades = 0;

		double homework_sum = 0;
		double homework_num_grades = 0;

};
