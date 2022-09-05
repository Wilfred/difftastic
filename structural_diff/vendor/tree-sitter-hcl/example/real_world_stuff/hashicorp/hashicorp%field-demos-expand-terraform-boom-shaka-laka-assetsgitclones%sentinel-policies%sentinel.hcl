module "tfrun-functions" {
    source = "./common-functions/tfrun-functions/tfrun-functions.sentinel"
}

policy "limit-cost-by-workspace-name" {
    source = "./limit-cost-by-workspace-name.sentinel"
    enforcement_level = "soft-mandatory"
}
