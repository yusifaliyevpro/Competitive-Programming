// 183. Customers Who Never Order
// https://leetcode.com/problems/customers-who-never-order/

SELECT name AS Customers
FROM Customers
LEFT JOIN Orders ON Customers.id = Orders.customerId
WHERE Orders.customerId IS NULL;