# Write your MySQL query statement below
# Write your MySQL query statement below
select patient_id, patient_name, conditions
from patients
where conditions like '%_% DIAB1%'
    or conditions like 'DIAB1%'
