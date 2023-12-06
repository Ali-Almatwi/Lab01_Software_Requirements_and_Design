# HospitalCRM System Analysis and Modeling

This project involves the analysis of requirements and UML-based modeling of the HospitalCRM system using the RM2PT tool.

## Introduction

The objectives of this project are:
- To understand and apply requirements analysis techniques.
- To develop proficiency in UML modeling methodologies.
- To utilize RM2PT for generating interactive prototypes.

This project revisits a previous modeling attempt, the HotelManagementSystem project, to reflect on lessons learned and apply them in the HospitalCRM system analysis.

## Hotel Management System

The initial HotelManagementSystem project encountered challenges due to its high complexity and expansive scope. These challenges included:
- Managing model integrity.
- Implementing accurate OCL contracts.
- Validating intricate interdependencies.

This experience highlighted the need for an iterative, focused approach concentrating on essential features.

## HospitalCRM System Analysis and Validation

### Introduction

The HospitalCRM system is designed to enhance patient relationship management and care delivery across healthcare facilities. Its key capabilities include:
- Patient information and appointment management.
- Access to medical records and ensuring data security.
- Analytics for staff and feedback collection from patients.
- User-friendly tools and interfaces.

### Natural Language Requirements

The project documented major system functions using structured user stories. These stories follow a standard template covering stakeholders, needs, and benefits.
![8a02889f-d745-4e76-868d-c5efda4c5da2](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/4b56d33e-9b0b-4792-9431-7d9135078388)
![60698f1b-464b-4066-bff7-fbcbac512558](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/aff590f1-2c88-4799-99ee-940d3d42fb1a)
![d591e06b-f2e7-4264-83e9-17b713c49a8a](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/95442f2a-368c-40c8-8a99-08f1ec7a66ce)

### UML Requirements Model

The UML model captures the operational aspects of the system:
- **Use Case Diagram:** Illustrates high-level user-system interactions through actors and their actions. For example, the "View Medical History" use case.
  ![2c422f06-91f8-4b26-bcfa-43079db3940f](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/c8d70b7d-f223-4547-aab1-f3e0f87d0123)

- **Sequence Diagrams:** Describe specific system operation flows. For example, the steps involved in appointment scheduling.
![1c063f71-e292-4819-a7cb-dfde43434e82](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/91d37e37-ce9a-435b-937d-e755e11e4168)

- **Class Diagram:** Defines the main real-world entities in the system and their relationships. For example, the association between Patient and Doctor classes with the Appointment class.
  ![138d1874-e471-4277-85fb-474c344f76a6](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/8a69fe96-740a-4971-9e8f-cedab3d75a64)

- **OCL Contracts:** Establish formal rules and constraints. For example, ensuring that the doctor exist.
  ![5eed0801-769e-456c-ba91-7947a843558b](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/63f369e0-faf9-4bb5-a35a-f130e9c874bf)


### Prototype Generation


The use of RM2PT for automated prototype creation enabled the visualization of interactions and the validation of requirements. These prototypes facilitated the simulation of workflows.
![prto](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/7e44a501-0154-4da0-a410-27427b8daa73)
![7431b12f-1d67-43cf-a48c-cc130ae78777](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/d24e26d3-0544-4209-a068-7a2ecaeb70be)
![51713323-0805-4b52-9109-5b4d84089359](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/8d9f849c-3dfd-443d-bccd-62622409ef59)

## Conclusion

Despite its limitations, RM2PT effectively bridged the gap between theory and implementation, enhancing analytical competencies through practical application.


#  Lab 3: Automated generation of architectural design and detailed design

## Introduction

This lab we investigates the application of RM2MS and RapidMS, plugins within the RM2PT tool, designed to automate the translation of user requirements into system architecture and detailed object-oriented design. Focusing on the development of a Hospital Customer Relationship Management (HospitalCRM) system, the lab illustrates how these tools facilitate the creation of a microservices architecture and an object-oriented design, essential for modern, scalable, and maintainable software solutions.


## Task 1: Automated Generation of Architecture Design (RapidMS)

In this task, we learned to use the RapidMS plugin of RM2PT for automating the creation of a microservices architecture from a given set of requirements. By analyzing the HospitalCRM system's needs, we applied RapidMS to identify and define microservices, such as patient feedback and appointment scheduling, translating these requirements into a service-oriented architecture model. This hands-on experience highlighted the utility of RapidMS in simplifying the initial stages of system design.

- **HospitalCRM Use case Model Microservices Architecture** 
![1621701883358_ pic](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/6b12b16a-fc17-4330-82e2-150a3635ce75)

-  **HospitalCRM Domain Model Microservices Architecture** 
![1641701883359_ pic](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/36e1ecd4-66d9-4520-b106-b79426d88653)

##  Task 2:Automated Generation of object-oriented Detailed Design (RM2DM)

In Task 2, we engaged with the RM2DM plugin to automate the creation of an object-oriented design from the HospitalCRM system's requirements. This involved converting use cases into detailed class diagrams that define the system's structure, including classes, attributes, and relationships. The process underscored RM2DM's utility in streamlining the design phase and translating theoretical OO principles into practical, executable design elements.

![1651701883388_ pic_hd](https://github.com/Ali-Almatwi/Lab01_Software_Requirements_and_Design/assets/148684334/360603fb-9382-4040-8cee-0583da049665)

