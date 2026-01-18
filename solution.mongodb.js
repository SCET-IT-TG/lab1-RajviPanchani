//exercise : 1


use examDB
db.students.insertOne({
  name: "Amit",
  department: "Computer Science",
  semester: 5
})

db.students.insertOne({
  name: "Neha",
  department: "Information Technology",
  semester: 3
})


//exercise : 2


db.students.insertOne({
  name: "Ravi",
  department: "Electronics",
  semester: 6,
  mobile: "9876543210"
})


//exercise : 3


db.subjects.insertOne({
  course_name: "BSc Computer Science",
  subject_list: ["DBMS", "Operating System", "Computer Networks", "Java"]
})


//exercise : 4


db.faculty.insertOne({
  department: "Computer Science",
  teachers: [
    { name: "Dr. Sharma", experience: 12 },
    { name: "Ms. Patel", experience: 7 }
  ]
})


//exercise : 5


db.students.insertOne({
  _id: ObjectId(),
  name: "Kiran",
  department: "Mechanical",
  semester: 4
})


//exercise : 6


db.students.insertOne({
  _id: 101,
  name: "Suresh",
  department: "Civil"
})


//exercise : 7


db.subjects.insert({
  course_name: "MBA",
  subject_list: ["Finance", "Marketing"]
})

db.subjects.insert({
  course_name: "BCA",
  subject_list: ["C", "C++", "Python"]
})

db.subjects.insert({
  course_name: "MCA",
  subject_list: ["AI", "ML", "Cloud Computing"]
})


