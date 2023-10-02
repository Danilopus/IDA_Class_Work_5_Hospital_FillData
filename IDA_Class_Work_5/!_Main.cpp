
// Class Work 02.10.2023 -------------------------------------------	


/// CRUDs commands
/*
CREATE
READ (REQUEST)
UPDATE
DELETE (DROP)
*/


  /////////////////////
 /// DML операторы ///
/////////////////////
/*
INSERT - создание записи
SELECT - получение текущих данных
UPDATE - изменение текущих данных
DELETE - удаление данных
*/

/// INSERT
/*
INSERT {* | filed1, field2, field3} INTO TABLE_NAME (value1, value2, value3)


Если INSERT * - имеет значение порядок полей
Если INSERT field1, field2 - порядок полей определен в запросе
*/

/// DELETE
/*

DELETE INTO TABLE_NAME
WHERE id = 4

*/

/// UPDATE
/*
UPDATE {* | field1,field2} FROM TABLE_NAME
WHERE id = 4 (value1,value2)
*/

/// SELECT
/*
SELECT {* | field1 [as 'nickname'], field2, field3+field4[as 'Zarplata']} FROM TABLE_NAME []
*/