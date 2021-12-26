-- to display the list of all database with created date
SELECT name, database_id, create_date  
FROM sys.databases ; 

--OR

-- to display the list of all database with  database size
EXEC sp_databases;




-- to display the list of all tables in the selected database
SELECT *FROM INFORMATION_SCHEMA.TABLES ;



    
-- to display the list of all constraints in the selected database
SELECT *FROM INFORMATION_SCHEMA.TABLE_CONSTRAINTS;

