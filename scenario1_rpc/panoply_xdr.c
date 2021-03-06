/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "panoply.h"

bool_t
xdr_abonnement (XDR *xdrs, abonnement *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->id_abo))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->type_abo, 30,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->prix_abo))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->credit_abo))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_list_abonnement (XDR *xdrs, list_abonnement *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->abonnements, 5,
		sizeof (abonnement), (xdrproc_t) xdr_abonnement))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nb_different_abonnement))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_collection (XDR *xdrs, collection *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->id_collection))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->nom_collection, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_list_collection (XDR *xdrs, list_collection *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->collection, 5,
		sizeof (collection), (xdrproc_t) xdr_collection))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nb_different_collection))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_brand (XDR *xdrs, brand *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->id_brand))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->brand_name, 32,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->description, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_list_brand (XDR *xdrs, list_brand *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->brands, 5,
		sizeof (brand), (xdrproc_t) xdr_brand))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nb_different_brand))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_point_livraison (XDR *xdrs, point_livraison *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_article (XDR *xdrs, article *objp)
{
	register int32_t *buf;

	int i;

	if (xdrs->x_op == XDR_ENCODE) {
		 if (!xdr_int (xdrs, &objp->id_article))
			 return FALSE;
		 if (!xdr_vector (xdrs, (char *)objp->nom, 32,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		buf = XDR_INLINE (xdrs, ( 5 ) * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_vector (xdrs, (char *)objp->taille, 5,
				sizeof (int), (xdrproc_t) xdr_int))
				 return FALSE;

		} else {
		{
			register int *genp;

			for (i = 0, genp = objp->taille;
				i < 5; ++i) {
				IXDR_PUT_LONG(buf, *genp++);
			}
		}
		}
		 if (!xdr_point_livraison (xdrs, &objp->pt_livraison))
			 return FALSE;
		 if (!xdr_int (xdrs, &objp->prix_location))
			 return FALSE;
		 if (!xdr_collection (xdrs, &objp->collection_reference))
			 return FALSE;
		 if (!xdr_brand (xdrs, &objp->brand_reference))
			 return FALSE;
		 if (!xdr_int (xdrs, &objp->credit))
			 return FALSE;
		 if (!xdr_int (xdrs, &objp->stock))
			 return FALSE;
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		 if (!xdr_int (xdrs, &objp->id_article))
			 return FALSE;
		 if (!xdr_vector (xdrs, (char *)objp->nom, 32,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		buf = XDR_INLINE (xdrs, ( 5 ) * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_vector (xdrs, (char *)objp->taille, 5,
				sizeof (int), (xdrproc_t) xdr_int))
				 return FALSE;

		} else {
		{
			register int *genp;

			for (i = 0, genp = objp->taille;
				i < 5; ++i) {
				*genp++ = IXDR_GET_LONG(buf);
			}
		}
		}
		 if (!xdr_point_livraison (xdrs, &objp->pt_livraison))
			 return FALSE;
		 if (!xdr_int (xdrs, &objp->prix_location))
			 return FALSE;
		 if (!xdr_collection (xdrs, &objp->collection_reference))
			 return FALSE;
		 if (!xdr_brand (xdrs, &objp->brand_reference))
			 return FALSE;
		 if (!xdr_int (xdrs, &objp->credit))
			 return FALSE;
		 if (!xdr_int (xdrs, &objp->stock))
			 return FALSE;
	 return TRUE;
	}

	 if (!xdr_int (xdrs, &objp->id_article))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->nom, 32,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->taille, 5,
		sizeof (int), (xdrproc_t) xdr_int))
		 return FALSE;
	 if (!xdr_point_livraison (xdrs, &objp->pt_livraison))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->prix_location))
		 return FALSE;
	 if (!xdr_collection (xdrs, &objp->collection_reference))
		 return FALSE;
	 if (!xdr_brand (xdrs, &objp->brand_reference))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->credit))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->stock))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_article_list (XDR *xdrs, article_list *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->article, 5,
		sizeof (article), (xdrproc_t) xdr_article))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nb_different_article))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_connu_panoply (XDR *xdrs, connu_panoply *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_mail (XDR *xdrs, mail *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->email, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_mot_de_passe (XDR *xdrs, mot_de_passe *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->mdp, 32,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_date (XDR *xdrs, date *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->jour))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->mois))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->annee))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_identifiants (XDR *xdrs, identifiants *objp)
{
	register int32_t *buf;

	 if (!xdr_mail (xdrs, &objp->email))
		 return FALSE;
	 if (!xdr_mot_de_passe (xdrs, &objp->mdp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_compte (XDR *xdrs, compte *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->id_compte))
		 return FALSE;
	 if (!xdr_mail (xdrs, &objp->email))
		 return FALSE;
	 if (!xdr_mot_de_passe (xdrs, &objp->mdp))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->nom, 32,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->prenom, 32,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_date (xdrs, &objp->date_de_naissance))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->telephone))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->profession, 64,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->pays, 32,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nb_credit))
		 return FALSE;
	 if (!xdr_connu_panoply (xdrs, &objp->connaissance))
		 return FALSE;
	 if (!xdr_abonnement (xdrs, &objp->abonnement_suivi))
		 return FALSE;
	 if (!xdr_date (xdrs, &objp->date_abonnement))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_list_account (XDR *xdrs, list_account *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->cmpt, 15,
		sizeof (compte), (xdrproc_t) xdr_compte))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nbCompte))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_cart (XDR *xdrs, cart *objp)
{
	register int32_t *buf;

	int i;

	if (xdrs->x_op == XDR_ENCODE) {
		 if (!xdr_int (xdrs, &objp->id_cart))
			 return FALSE;
		 if (!xdr_vector (xdrs, (char *)objp->list_article, 5,
			sizeof (article), (xdrproc_t) xdr_article))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->nbArticle))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->rent_price_credit))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->rent_price_euros))
				 return FALSE;

		} else {
		IXDR_PUT_LONG(buf, objp->nbArticle);
		IXDR_PUT_LONG(buf, objp->rent_price_credit);
		IXDR_PUT_LONG(buf, objp->rent_price_euros);
		}
		 if (!xdr_point_livraison (xdrs, &objp->pt_livraison))
			 return FALSE;
		 if (!xdr_date (xdrs, &objp->date_livraison))
			 return FALSE;
		 if (!xdr_date (xdrs, &objp->date_rendu))
			 return FALSE;
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		 if (!xdr_int (xdrs, &objp->id_cart))
			 return FALSE;
		 if (!xdr_vector (xdrs, (char *)objp->list_article, 5,
			sizeof (article), (xdrproc_t) xdr_article))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->nbArticle))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->rent_price_credit))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->rent_price_euros))
				 return FALSE;

		} else {
		objp->nbArticle = IXDR_GET_LONG(buf);
		objp->rent_price_credit = IXDR_GET_LONG(buf);
		objp->rent_price_euros = IXDR_GET_LONG(buf);
		}
		 if (!xdr_point_livraison (xdrs, &objp->pt_livraison))
			 return FALSE;
		 if (!xdr_date (xdrs, &objp->date_livraison))
			 return FALSE;
		 if (!xdr_date (xdrs, &objp->date_rendu))
			 return FALSE;
	 return TRUE;
	}

	 if (!xdr_int (xdrs, &objp->id_cart))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->list_article, 5,
		sizeof (article), (xdrproc_t) xdr_article))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nbArticle))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->rent_price_credit))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->rent_price_euros))
		 return FALSE;
	 if (!xdr_point_livraison (xdrs, &objp->pt_livraison))
		 return FALSE;
	 if (!xdr_date (xdrs, &objp->date_livraison))
		 return FALSE;
	 if (!xdr_date (xdrs, &objp->date_rendu))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_historiqueCommande (XDR *xdrs, historiqueCommande *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->listCommande, 5,
		sizeof (cart), (xdrproc_t) xdr_cart))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nbCommande))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_panoply (XDR *xdrs, panoply *objp)
{
	register int32_t *buf;

	 if (!xdr_list_account (xdrs, &objp->comptes))
		 return FALSE;
	 if (!xdr_list_collection (xdrs, &objp->collections))
		 return FALSE;
	 if (!xdr_article_list (xdrs, &objp->articles))
		 return FALSE;
	 if (!xdr_list_abonnement (xdrs, &objp->abonnements))
		 return FALSE;
	 if (!xdr_list_brand (xdrs, &objp->marques))
		 return FALSE;
	 if (!xdr_historiqueCommande (xdrs, &objp->commandes))
		 return FALSE;
	return TRUE;
}
