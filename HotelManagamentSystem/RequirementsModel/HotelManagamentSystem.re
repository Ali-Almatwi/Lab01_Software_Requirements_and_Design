As a receptionist, I want to check in guests so that they can start their stay

{

Basic Flow {

(User) 1. the guest shall arrive at reception desk with reservation details.
(User) 2. the receptionist shall greet guest and ask for identification and reservation details.
(User) 3. the guest shall provide identification and reservation details.
(System) 4. when guest provides valid identification and reservation details, the Hotel Management System shall validate reservation.
(System) 5. when valid reservation details are provided, the Hotel Management System shall allocate available room based on reservation.
(System) 6. when allocating room, the Hotel Management System shall generate room key for guest.
(User) 7. the receptionist shall provide room key and directions to guest.
(System) 8. when allocating room, the Hotel Management System shall update room status to occupied.

}

}

As a receptionist, I want to check out guests so that they can settle their bills and vacate their rooms

{

Basic Flow {

(User) 1. the guest shall request to check out at reception desk.
(User) 2. the receptionist shall greet guest and ask for room number.
(User) 3. the guest shall provide room number.
(System) 4. when guest provides room number, the Hotel Management System shall retrieve folio for that room.
(System) 5. the Hotel Management System shall calculate final bill including room charges taxes and additional charges.
(System) 6. the Hotel Management System shall accept payment from guest and generate receipt.
(System) 7. when payment completes, the Hotel Management System shall update room status to vacant.

}

}

As a receptionist, I want to add reservations so that guests can book rooms in advance  

{

Basic Flow {

(User) 1. the guest shall provide details for reservation request to receptionist.
(User) 2. the receptionist shall enter reservation details into system.
(System) 3. where Hotel Management System has room availability, then Hotel Management System shall create reservation record and send confirmation to guest.
(System) 4. if requested reservation dates not available, then Hotel Management System shall prompt receptionist to offer alternate dates or room types to guest.

}

}

As a housekeeper, I want to update room status so that room availability can be tracked  

{

Basic Flow {

(User) 1. the housekeeper shall access room status management interface.
(User) 2. when room cleaning is complete or required, the housekeeper shall update room status to clean or dirty as needed.
(System) 3. the Hotel Management System shall update room status accordingly.
(System) 4. the Hotel Management System shall prevent booking of rooms marked dirty until status is updated to clean.

}

}

As a manager, I want to add staff so that hotel operations can be managed efficiently

{

Basic Flow {

(User) 1. the manager shall access staff management interface.
(User) 2. the manager shall enter new staff details.
(System) 3. the Hotel Management System shall validate staff details.
(System) 4. the Hotel Management System shall create new staff record.
(System) 5. the Hotel Management System shall assign applicable access permissions to new staff member.

}

}

As a accountant, I want to generate bills so that guests can make payments for their stays and services

{

Basic Flow {

(System) 1. where there are checkedin guests, the Hotel Management System shall automatically generate bills on daily basis.
(System) 2. the bills shall include room rent taxes charges for additional services etc.
(System) 3. the Hotel Management System shall update folio for each guest with generated bill details.
(System) 4. the Hotel Management System shall send bill to guests room.

}

}

As a accountant, I want to take payments so that guests can settle their bills and hotel gets revenue

{

Basic Flow {

(User) 1. the accountant shall retrieve unpaid bills for checkout guests.
(User) 2. the accountant shall accept payment from guest via cash credit card etc.
(System) 3. the Hotel Management System shall confirm payment by generating receipt.
(System) 4. the Hotel Management System shall settle bill and update guests folio.

}

}



