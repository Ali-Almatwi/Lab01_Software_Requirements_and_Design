# HotelManagementSystem

## Overview
The HotelManagementSystem is a comprehensive software suite designed to automate and manage various tasks in the hotel industry. The system aims to streamline the workflow, enhance efficiency, and improve the guest experience by reducing the time taken to perform various operational activities such as check-in, check-out, reservation management, and billing among others.

## Features
1. **Reservation Management:**
   - Allows guests to make reservations.
   - Sends reservation confirmations and reminders.
2. **Check-in and Check-out Processing:**
   - Facilitates swift check-in and check-out processes.
   - Updates room status in real-time.
3. **Billing and Payment Processing:**
   - Automatically calculates bills including room charges, taxes, and additional services.
   - Integrates with external payment systems for smooth transactions.
4. **Room and Staff Management:**
   - Tracks room status and availability.
   - Manages staff scheduling and access permissions.
5. **Reporting and Analytics:**
   - Generates various reports for management review.
   - Provides analytics for performance assessment.
6. **External Booking and Payment Services Integration:**
   - Facilitates booking through third-party platforms.
   - Processes external payments securely.
7. **Maintenance and Housekeeping Updates:**
   - Allows housekeeping to update room status.
   - Sends alerts for maintenance requirements.

## Natural Language Requirements Part:
### User Stories
<img width="468" alt="image" src="https://github.com/Ali-Almatwi/Software-Requirements-and-Design/assets/148684334/b0a31d8f-bda1-44c7-b5e5-fc447b8d502f">
<img width="468" alt="image" src="https://github.com/Ali-Almatwi/Software-Requirements-and-Design/assets/148684334/5f18b3ec-cc90-474d-88c1-637cd7017d76">



This structured documentation provides a detailed outline of the user requirements, both functional and non-functional, for the Hotel Management System project. Each user story describes a specific process or task in the hotel's operation, along with the basic or alternative flow of interactions between the user and the system. Through these requirements, stakeholders can have a clear understanding of the system's capabilities and expectations.

## UML Requirement Model part:
### Use Case Diagram
![image](https://github.com/Ali-Almatwi/Software-Requirements-and-Design/assets/148684334/92309504-efac-4de0-81bd-b47660803a05)


The use case diagram illustrates the interactions between different actors (Receptionist, Manager, Housekeeper, and Accountant) and the system's functionalities.

### System Sequence Diagram for Use Case
![image](https://github.com/Ali-Almatwi/Software-Requirements-and-Design/assets/148684334/d1e15134-5735-4bfe-a9c3-35cac90c6e8d)

This is a sequence diagram detailing the check-in process. Sequence diagrams show how objects communicate with each other in terms of a sequence of messages.

## OLC for System Operation
<img width="468" alt="image" src="https://github.com/Ali-Almatwi/Software-Requirements-and-Design/assets/148684334/018b4f3b-c2a1-453a-a090-f20a9777d88a">

The provided code represents OCL (Object Constraint Language) contracts for two service operations in a hotel management system. 

## Conceptual Class Diagram for Domain Model
![image](https://github.com/Ali-Almatwi/Software-Requirements-and-Design/assets/148684334/69cc6f87-12dc-4323-b30c-9164b5a8da44)

Within the realm of our Hotel Management System, the Conceptual Class Diagram serves as a visual representation of the major entities or classes, capturing the relationships and attributes vital for the system's functionality.

## UML Requirements Prototyping and Validation Using RM2PT
<img width="468" alt="image" src="https://github.com/Ali-Almatwi/Software-Requirements-and-Design/assets/148684334/be9728fd-eedd-4bc5-8ebd-31606c796203">

During the prototyping using RM2PT, I encountered a critical issue that prevented successful execution.

## Limitations and Challenges with RM2PT Software:

<img width="285" alt="image" src="https://github.com/Ali-Almatwi/Software-Requirements-and-Design/assets/148684334/3c869292-2038-46c8-a7d3-8332c3eeabfe">

1. Unclear Instructions: The software does not offer clear guidelines on its utilization, especially for beginners.
2. Syntax Errors: While writing user stories, the software frequently produced syntax errors.
3. Lack of Error Solutions: When errors occur, the software does not provide instructive solutions or explanations on how to resolve them.
4. Misleading Error Prompts: Sometimes, the software indicates errors in certain areas, but the actual solution lies in addressing a different part of the project.
5. Challenges with OCL Contracts: Implementing OCL contracts proved to be tough.
6. Prototyping Limitations: Generating prototypes was a challenging affair.
7. No Backtracking Functionality: The software lacks features like "undo."
8. Sequence System Diagram (SSD) Issues: The software sometimes generates inconsistent SSDs.
9. Graphical Anomalies: Simple actions like adding a “MessageCall” to the sequence diagram would sometimes not reflect immediately.
10. Prototyping Failures: Even after investing significant time, the software's prototyping process can still fail.
11. Lack of Comprehensive Tutorials: For advanced features and troubleshooting, there seems to be a dearth of comprehensive tutorials or guides.

In conclusion, while RM2PT might offer certain benefits and features, these challenges highlight areas of improvement. Addressing these limitations can make the software more user-friendly and efficient for system modeling and prototyping tasks.
