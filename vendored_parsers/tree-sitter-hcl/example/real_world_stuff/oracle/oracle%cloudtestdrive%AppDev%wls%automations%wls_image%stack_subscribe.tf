// Copyright (c) 2019, 2020 Oracle and/or its affiliates. All rights reserved.
/*
* This is an example of a marketplace agreement
*/



# DATA 1 - Get a list of element in Marketplace, using filters, eg name of the stack
data "oci_marketplace_listings" "test_listings" {
  name = ["Oracle WebLogic Server Enterprise Edition UCM"]
  #name = ["Oracle Cloud Developer Image"]
  compartment_id = var.compartment_ocid
}

# DATA 2 - Get details cf the specific listing you are interested in and which you obtained through generic listing
data "oci_marketplace_listing" "test_listing" {
  listing_id     = data.oci_marketplace_listings.test_listings.listings[0].id
  compartment_id = var.compartment_ocid
}

# DATA 3 - Get the list of versions for the specific entry (11.3, 12.2.1, ....)
data "oci_marketplace_listing_packages" "test_listing_packages" {
  #Required
  listing_id = data.oci_marketplace_listing.test_listing.id

  #Optional
  compartment_id = var.compartment_ocid

  #package_version = "WLS 10.3.6.0.200714.05(11.1.1.7)"
  package_version = data.oci_marketplace_listing.test_listing.default_package_version
}

# DATA 4 - Get details about a specfic version
data "oci_marketplace_listing_package" "test_listing_package" {
  #Required
  listing_id      = data.oci_marketplace_listing.test_listing.id
  package_version = data.oci_marketplace_listing_packages.test_listing_packages.package_version

  #Optional
  compartment_id = var.compartment_ocid
}

# DATA 5 - agreement for a specific version
data "oci_marketplace_listing_package_agreements" "test_listing_package_agreements" {
  #Required
  listing_id      = data.oci_marketplace_listing.test_listing.id
  package_version = data.oci_marketplace_listing_packages.test_listing_packages.package_version

  #Optional
  compartment_id = var.compartment_ocid
}



# RESOURCE 1 - agreement for a specific version
resource "oci_marketplace_listing_package_agreement" "test_listing_package_agreement" {
  #Required
  agreement_id    = data.oci_marketplace_listing_package_agreements.test_listing_package_agreements.agreements[0].id
  listing_id      = data.oci_marketplace_listing.test_listing.id
  package_version = data.oci_marketplace_listing_packages.test_listing_packages.package_version
}

# RESOURCE 2 - Accepted agreement
resource "oci_marketplace_accepted_agreement" "test_accepted_agreement" {
  #Required
  agreement_id    = oci_marketplace_listing_package_agreement.test_listing_package_agreement.agreement_id
  compartment_id  = var.compartment_ocid
  listing_id      = data.oci_marketplace_listing.test_listing.id
  package_version = data.oci_marketplace_listing_packages.test_listing_packages.package_version
  signature       = oci_marketplace_listing_package_agreement.test_listing_package_agreement.signature
}




# DATA 1 : list of entry in Marketplace
output "data_1_oci_marketplace_listings" {
  sensitive = false
  value = [
  # For debugging, show full data field
  # data.oci_marketplace_listings.test_listings,
  format("Listing name: %s", data.oci_marketplace_listings.test_listings.listings[0].name),
  format("Package Type: %s", data.oci_marketplace_listings.test_listings.listings[0].package_type)
  ]
}


# DATA 2 : single entry in Marketplace (wls EE UCM)
output "data_2_oci_marketplace_listing" {
  sensitive = false
  value = [
  # For debugging, show full data field
  # data.oci_marketplace_listing.test_listing,
  format("Listing name: %s", data.oci_marketplace_listing.test_listing.name),
  format("Default version: %s", data.oci_marketplace_listing.test_listing.default_package_version)
  ]
}


# DATA 4 : Single version of an entry (11g)
output "DATA_4_oci_marketplace_listing_package" {
  sensitive = false
  value = [
  # For debugging, show full data field
  # data.oci_marketplace_listing_package.test_listing_package,
  format("Resource Link: %s", data.oci_marketplace_listing_package.test_listing_package.resource_link),
  format("Version: %s", data.oci_marketplace_listing_package.test_listing_package.version)
  ]
}

output "DATA_5_oci_marketplace_listing_package_agreements" {
  sensitive = false
  value = [
  # For debugging, show full data field
  # data.oci_marketplace_listing_package_agreements.test_listing_package_agreements,
  format("Package Version: %s", data.oci_marketplace_listing_package_agreements.test_listing_package_agreements.package_version)
  ]
}


output "RESOURCE_1_oci_marketplace_listing_package_agreement" {
  sensitive = false
  value = [
  # For debugging, show full data field
  # oci_marketplace_listing_package_agreement.test_listing_package_agreement,
  format("Package Version: %s", oci_marketplace_listing_package_agreement.test_listing_package_agreement.package_version),
  format("Author: %s", oci_marketplace_listing_package_agreement.test_listing_package_agreement.author)
  ]
}


output "RESOURCE_2_oci_marketplace_accepted_agreement" {
  sensitive = false
  value = [
  # For debugging, show full data field
  # oci_marketplace_accepted_agreement.test_accepted_agreement,
  format("Package Version: %s", oci_marketplace_accepted_agreement.test_accepted_agreement.package_version),
  format("Date Accepted: %s", oci_marketplace_accepted_agreement.test_accepted_agreement.time_accepted)
  ]
}
