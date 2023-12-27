def gradingStudents(grades):
    # Write your code here
    for num, grade in enumerate(grades):
        temp = grade
        while 1:
            if grade % 5 != 0:
                grade += 1
            else:
                if grade < 40 or grade - temp == 3:
                    grades[num] = temp
                elif grade - temp < 3:
                    grades[num] = grade

                break

    return grades
