# Write your MySQL query statement below
SELECT
   a.city,
   a.state,
   p.lastName,
   p.firstName

#alias should always be diffrent from the actual name, you cant repeat both.--
FROM Person p
LEFT JOIN Address a ON p.personId =a.personId;