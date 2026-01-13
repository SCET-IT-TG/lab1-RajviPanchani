//exercise:1
db.students.insertOne({
  name: "Alice",
  department: "Computer Science",
  semester: 3,
  mobile: "9876543210"
})

db.students.insertOne({
  name: "Bob",
  department: "Information Technology",
  semester: 5,
  mobile: "9123456780"
})

//exercise:2
db.students.insertOne({
  name: "Charlie",
  department: "Electronics",
  semester: 4,
  mobile: "9001122334"
})

//exercise:3
db.subjects.insertOne({
  course_name: "BSc Computer Science",
  subject_list: ["DBMS", "Operating Systems", "Networks", "AI"]
})

//exercise:4
db.faculty.insertOne({
  department: "Computer Science",
  teachers: [
    { name: "Dr. Kumar", experience: 12 },
    { name: "Ms. Anita", experience: 7 }
  ]
})

//exercise:5
db.students.insertOne({
  _id: ObjectId(),
  name: "David",
  department: "Mechanical",
  semester: 6,
  mobile: "9887766554"
})

//exercise:6
db.students.insertOne({
  _id: 101,
  name: "Emma",
  department: "Civil"
})

//exercise:7
db.subjects.insert({
  course_name: "BCA",
  subject_list: ["C Programming", "Maths"]
})

db.subjects.insert({
  course_name: "BBA",
  subject_list: ["Management", "Accounting"]
})

db.subjects.insert({
  course_name: "MBA",
  subject_list: ["Finance", "Marketing"]
})
