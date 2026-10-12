CREATE DATABASE event_management_db;
CREATE TABLE event ( 
event_id SERIAL PRIMARY KEY, 
event_name VARCHAR(100) NOT NULL, 
event_date DATE NOT NULL, 
location VARCHAR(100) 
); 
CREATE TABLE registration ( 
registration_id SERIAL PRIMARY KEY, 
participant_name VARCHAR(100) NOT NULL, 
email VARCHAR(100) UNIQUE NOT NULL, 
event_id INT REFERENCES event(event_id) ON DELETE CASCADE 
); 
CREATE TABLE ticket ( 
ticket_id SERIAL PRIMARY KEY, 
ticket_type VARCHAR(50) NOT NULL, 
price NUMERIC(10,2) NOT NULL, 
registration_id INT REFERENCES registration(registration_id) ON DELETE 
CASCADE 
);
INSERT INTO event (event_name, event_date, location) 
VALUES 
('Tech Conference', '2026-03-15', 'Lahore'), 
('AI Workshop', '2026-04-10', 'Islamabad'); 
INSERT INTO registration (participant_name, email, event_id) 
VALUES 
('Ali Khan', 'ali@gmail.com', 1), 
('Sara Ahmed', 'sara@gmail.com', 1), 
('Bilal Raza', 'bilal@gmail.com', 2); 
INSERT INTO ticket (ticket_type, price, registration_id) 
VALUES 
('Standard', 2000.00, 1), 
('VIP', 5000.00, 2), 
('Standard', 2500.00, 3);
SELECT * FROM event;
SELECT e.event_name, r.participant_name 
FROM event e 
JOIN registration r ON e.event_id = r.event_id; 
SELECT r.participant_name, t.ticket_type, t.price 
FROM registration r 
JOIN ticket t ON r.registration_id = t.registration_id;
SELECT e.event_name, SUM(t.price) AS total_revenue 
FROM event e 
JOIN registration r ON e.event_id = r.event_id 
JOIN ticket t ON r.registration_id = t.registration_id 
GROUP BY e.event_name;

INSERT INTO event (event_name, event_date, location) 
SELECT 
'Event ' || gs, 
CURRENT_DATE + (gs % 365), 
'City ' || (gs % 10) 
FROM generate_series(1,100000) AS gs;

SELECT e.event_name, SUM(t.price) AS total_revenue
FROM event e
JOIN registration r
ON e.event_id = r.event_id
JOIN ticket t
ON r.registration_id = t.registration_id
GROUP BY e.event_name;