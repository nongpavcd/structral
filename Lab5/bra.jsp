<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>

            รหัสนักศึกษา : <input type="text" name="stdId" value="" />
            <button class="">ค้นหา</button> <br>
            ชื่อนักศึกษา : <input type="text" name="stdName" value="" /><br>
            จำนวนวิชาที่ลงทะเบียน : <input type="text" name="QtySubject" value=""  />
            <button class="">ลงทะเบียน</button> <br>
        <table border="1">
            <thead>
                <tr>
                    <th>ลำดับที่</th>
                    <th>รหัสวิชา</th>
                    <th>ชื่อวิชา</th>
                    <th>หน่วยกิต</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td></td>
                    <td><input type="text" name="subjectID" value="" /></td>
                    <td><input type="text" name="subjectName" value="" /></td>
                    <td><select name="unit" >
                            <option>1</option>
                            <option>2</option>
                            <option>3</option>
                        </select></td>
                </tr>
            </tbody>
        </table>
            <input type="submit" value="ตกลง" name="Submit" />   <input type="reset" value="ยกเลิก" name="reset" />

    </body>
</html>